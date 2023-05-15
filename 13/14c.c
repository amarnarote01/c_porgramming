//Write a C program to find Factorial of given number (Function with return type without parameter values).
#include<stdio.h>
int fac();
int main()
{
    int f;
   f=fac();
    printf("factorial is  = %d",f);

    return 0;
}
int fac()
{
    int x;
    printf("Enter no");
    scanf("%d",&x);
    int i,fact=1;
    for(i=x;i>0;i--)
    {
    fact=fact*i;
        
    }
  return fact;
   

}