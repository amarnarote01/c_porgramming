#include<stdio.h>
int main()
{
  int n,c=0;
  printf(" Enter the number ");
  scanf("%d",&n);
  while(n>0)
  {
    n=n/10;
    c++;
  }
  printf("Count is %d",c);

return 0;
}