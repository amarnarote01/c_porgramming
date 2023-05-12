// 9.Write a C program to find sum of all array elements. 
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
        for (i=0;i<n;i++)
    {
        sum=sum+a[i];
            
    }
    printf("sum of all array elements=%d",sum);
}