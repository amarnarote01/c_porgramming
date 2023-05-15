// 14)Write a C program to find Factorial of given number (Using Function without return type without parameter values.).
#include<stdio.h>
void fac();
int main()
{
    fac();

    return 0;
}
void fac()
{
    int i,n,fact=1;
    printf("Enter no");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
    fact=fact*i;
        
    }
 printf("factorial is  = %d",fact);
   

}