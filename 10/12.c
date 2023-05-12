// 12.Write a C program to find sum of all elements of array which are at even index.
#include<stdio.h>
int main()
{
    int n,a[100],i,sum;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
        for (i=0;i<n;i=i+2)
    {
        sum=sum+a[i];
            
    }
    printf("sum of all array at even elements=%d",sum);
}