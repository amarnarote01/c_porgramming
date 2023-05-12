#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter No;");
    scanf("%d",&n);
    while(n>0)
    {
     n=n/10;
     c++;
    }
    printf("count is %d",c);

}