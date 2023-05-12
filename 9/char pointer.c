#include<stdio.h>
int main()
{
  char c='A';
  char *p;
  p=&c;
  printf("Value of p before inc:%u",p);
//  p=p-5;
  printf("\nAddress of c=%u",&c);
  printf("\nAddress of p=%u",&p);
  printf("\nValue of c=%c",c);
  printf("\nValue of p after inc=%u",p);
  printf("\nValue of *p=%c",*p);  
  return 0;
}
