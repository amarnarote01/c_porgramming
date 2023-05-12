#include<stdio.h>
int main()
{
  int n,r,temp,sum=0;
  printf("\n Enter a no:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(temp==sum)
  printf("It is palindrome");
  else 
  printf("It is not palindrome");


return 0;
}