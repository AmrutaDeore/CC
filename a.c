#include<stdio.h>

/* 
* config_file -- 
* Read configuration values from a file. 
*/ 
void 
config_file(const char *name) 
{ 
FILE *fp; 
char buf[256], *p; 

if ((fp = fopen(name, "r")) == NULL) 
testutil_die(errno, "fopen: %s", name); 
// coverity[ -tainted_data_argument : arg-1 ]
while (fgets(buf, sizeof(buf), fp) != NULL) { 
for (p = buf; *p != '\0' && *p != '\n'; ++p) 
; 
*p = '\0'; 
if (buf[0] == '\0' || buf[0] == '#') 
continue; 
config_single(buf, 1); 
} 
fclose_and_clear(&fp); 
} 