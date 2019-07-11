#include<stdio.h>
//#include<cassert.h>

#define NEO_COMMPORT_IN_USE 1
#define EIP_COMMPORT_IN_USE 1

int b(int k)
{
	return 1;
	//static_assert((NEO_COMMPORT_IN_USE==1) ? (EIP_COMMPORT_IN_USE == 0): (NEO_COMMPORT_IN_USE == 0));
}

int c(int* input){
	int what;
	int j;
  if (b(3)!=NULL)
  {
    *input = 1;
  }
  else
   *input = 2;

if (b(2)!=NULL)
{int i=0; what=i;}

if (b(1)!=NULL)	
{int j=10; what=j;}

b(10);

	
	//function();
  return *input;
}

