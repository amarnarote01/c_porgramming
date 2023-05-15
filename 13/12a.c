// 12)Write a C program to find Sum of digits of given number (Using Function without return type without parameter values.).
#include<stdio.h>
void sum();
int main()
{
    sum();

    return 0;
}
void sum()
{
    int i,n,r,sum=0;
    printf("Enter no");
    scanf("%d",&n);
    for(i=n;n>0;i++)
    {
     r=n%10;
     sum=sum+r;
     n=n/10;
        
    }
 printf("Sum of digits  = %d",sum);
   

}