// 19)	Write a C program to find Sum of all even numbers between 1 to n (Function with return type without parameter values).
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
        if(i%2==0)
        sum=sum+i;
    }
    return sum;
   
}