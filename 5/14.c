#include<stdio.h>
int main()
{
    int b,e,i,p=1;
    printf("Enter base and exponent");
    scanf("%d %d",&b,&e);
    for(i=1;i<=e;i++)
    {
        p=p*b;
    }
    
    printf("power is %d",p);
    return 0;
}