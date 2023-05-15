//Write a C program to find Sum of 1 to n (Using Function with return type with parameter values).

#include<stdio.h>
int sum(int);
int main()
{
    int n,ans;
    printf("Enter no");
    scanf("%d",&n);
    ans=sum(n);
    printf("Sum is = %d",ans);

    return 0;
}
int sum(int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    return sum;


}