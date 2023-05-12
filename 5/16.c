#include<stdio.h>
int main()
{
    int n,i ,f=1;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
      f=f*i;
    }
    printf("factorial is %d",f);
}