//Write a C program to find Sum of 1 to n (Using Function without return type with parameter values).

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
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }
 printf("Sum is = %d",sum);
   
   

}