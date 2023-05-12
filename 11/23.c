// 23)	Write a C program to accept base and exponent. Find Power of given number (Function with return type without parameter values).
#include<stdio.h>
int power();
int main()
{
    int po;
    po=power();
    printf("power is  = %d",po);

    return 0;
}
int power()
{
    int x,y,i,p=1;
    printf("Enter base and exponent");
    scanf("%d %d",&x,&y);
    
    for(i=y;i>0;i--)
    {
    p=p*x;
        
    }
    return p;

   

}