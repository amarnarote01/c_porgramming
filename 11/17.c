// 17)	Write a C program to find Sum of 1 to n (Function with return type without parameter values).
#include<stdio.h>
int sum();
int main()
{ 
    int s;
    s=sum();
    printf("Sum is = %d",s);

    return 0;
}
int sum()
{
     int n;
    printf("Enter no");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
   
}