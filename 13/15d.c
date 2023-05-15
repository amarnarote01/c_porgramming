// Write a C program to accept base and exponent. Find Power of given number (Using Function without return type with parameter values).
#include<stdio.h>
int power(int,int);
int main()
{
    int b,e,ans;
    printf("Enter base and exponent");
    scanf("%d %d",&b,&e);
    ans=power(b,e);
    printf("power is  = %d",ans);

    return 0;
}
int power(int x,int y)
{
    int i,p=1;
    for(i=y;i>0;i--)
    {
    p=p*x;
        
    }
    return p;

   

}