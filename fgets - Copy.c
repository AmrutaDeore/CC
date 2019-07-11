#include <stdio.h>
#include <stdlib.h>
#include "Include.h"
int leak_example(int c) {
  void *p = malloc(10);
  if(c)
    return -1;   // "p" is leaked
  /* ... */
  free(p);
  return 0;
}

int test_example()
{
	return 1;
}

int main () {
   FILE *fp;
   char str[60];
   
   int t=1;
	leak_example(t);
   /* opening file for reading */
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
   if( fgets (str, 60, fp)!=NULL ) {
      /* writing content to stdout */
      puts(str);
   }
   fclose(fp);
   
   int k = test_example();
   printf("%d",&k);
    
   
   return(0);
}