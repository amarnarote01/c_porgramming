// 9)	Write a C program to perform Addition of two numbers (Function with return type without parameter values).
#include<stdio.h>
int add();
int main()
{
    int ans;

    ans=add();
    printf("Sum is %d",ans);

    return 0;
}
int add()
{
    int a,b,sum;
    printf("Enter two no:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}