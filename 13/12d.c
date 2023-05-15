// Write a C program to find Sum of digits of given number (Using Function with return type with parameter values).
#include<stdio.h>
int sum(int);
int main()
{
    int n,ans;
    printf("Enter no");
    scanf("%d",&n);
    ans=sum(n);
    printf("Sum of digits  = %d",ans);

    return 0;
}
int sum(int x)
{
    int i,r,sum=0;
    for(i=x;x>0;i++)
    {
     r=x%10;
     sum=sum+r;
     x=x/10;
        
    }
return sum;
   

}