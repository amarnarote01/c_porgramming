// 20)Write a C program to accept base and exponent. Find Power of given number (Using Function without return type with parameter values).
#include<stdio.h>
void power(int,int);
int main()
{
    int b,e;
    printf("Enter base and exponent");
    scanf("%d %d",&b,&e);
    power(b,e);

    return 0;
}
void power(int x,int y)
{
    int i,p=1;
    for(i=y;i>0;i--)
    {
    p=p*x;
        
    }
 printf("power is  = %d",p);
   

}