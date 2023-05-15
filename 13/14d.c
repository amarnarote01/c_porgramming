// Write a C program to find Factorial of given number (Using Function with return type with parameter values).
#include<stdio.h>
int fac(int);
int main()
{
    int n,ans;
    printf("Enter no");
    scanf("%d",&n);
    ans=fac(n);
    printf("factorial is  = %d",ans);

    return 0;
}
int fac(int x)
{
    int i,fact=1;
    for(i=x;i>0;i--)
    {
    fact=fact*i;
        
    }
 return fact;
   

}
