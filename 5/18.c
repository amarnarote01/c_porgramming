#include<stdio.h>
int main()
{
int n,a=0,b=1,i,sum=0;
printf("Enter no");
scanf("%d",&n);
printf("%d %d ",a,b);

for(i=2;i<n;i++)
{
sum=a+b;
printf("%d ",sum);
a=b;
b=sum;
}
return 0;
}
