#include <stdio.h>
#include <stdlib.h>
#include "Include.h"
double somefunc()
{
	return 'a';
}
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
	int somenum;
	return 1;
}

void f(char *s)
{
	s;
}

int main () {
   FILE *fp;
   char str[60];
   int newbug=10;
   int iamanewbugtoo;
   int iamanewbugtoo2=somefunc();
   int canibeanotherbug2;
   int somanybugs;
   
   char *s;
   
   if(s)
   {
	   return 0;
   }
   
   int t=1;
	leak_example(t);
   /* opening file for reading */
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
   if(newbug==iamanewbugtoo2) { puts(str) ; }
   if( fgets (str, 60, fp)!=NULL ) {
      /* writing content to stdout */
      puts(str);
   }
   fclose(fp);
   
   int k = test_example();
   printf("%d",&k);
    
   
   return(0);
}