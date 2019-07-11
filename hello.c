#include<stdio.h>
#include "test.c"


/* 
* config_file -- 
* Read configuration values from a file. 
*/ 
int main() 
{ 
FILE *fp; 
char buf[256], *p; 

if ((fp = fopen("file.txt", "r")) == NULL) {
	perror("Error opening file");
      return(-1);
}

while (fgets(buf, sizeof(buf), fp) != NULL) 
{ 
	//printf("%d\n", sizeof(buf));
for (p = buf; *p != '\0' && *p != '\n'; ++p)
 	printf("|%s %c|\n", p, *p);
*p = '\0';										//printf("post assign :%s%c%d|", p, *p, sizeof(p));
if (buf[0] == '\0' || buf[0] == '#')
		continue; 
//config_single(buf, 1); 
} 
fclose(fp); 

int somenum = 1;
c(&somenum);

return 0;
} 