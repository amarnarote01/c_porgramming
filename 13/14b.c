// Write a C program to find Factorial of given number (Using Function without return type with parameter values).
#include<stdio.h>
void fac(int);
int main()
{
    int n;
    printf("Enter no");
    scanf("%d",&n);
    fac(n);

    return 0;
}
void fac(int x)
{
    int i,fact=1;
    for(i=x;i>0;i--)
    {
    fact=fact*i;
        
    }
 printf("factorial is  = %d",fact);
   

}