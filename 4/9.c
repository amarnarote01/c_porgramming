#include<stdio.h>
int main()
{
int i=1,n,multiply=1;
printf("Enter no");
scanf("%d",&n);

for (i=1;i<=10;i++)
{

    multiply=n*i;

printf("%d*%d= %d\n",n,i,multiply);

}

return 0;
}