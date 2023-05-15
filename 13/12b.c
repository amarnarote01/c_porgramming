// 17)Write a C program to find Sum of digits of given number (Using Function without return type with parameter values).
#include<stdio.h>
void sum(int);
int main()
{
    int n;
    printf("Enter no");
    scanf("%d",&n);
    sum(n);

    return 0;
}
void sum(int x)
{
    int i,r,sum=0;
    for(i=x;x>0;i++)
    {
     r=x%10;
     sum=sum+r;
     x=x/10;
        
    }
 printf("Sum of digits  = %d",sum);
   

}