// 15)Write a C program to accept base and exponent. Find Power of given number (Using Function without return type without parameter values.).
#include<stdio.h>
void power();
int main()
{
    power();

    return 0;
}
void power()
{
    int i,b,e,p=1;
    printf("Enter base and exponent");
    scanf("%d %d",&b,&e);
    for(i=e;i>0;i--)
    {
    p=p*b;
        
    }
 printf("power is  = %d",p);
   

}