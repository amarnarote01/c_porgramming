// 11.Write a C program to find sum of all odd elements of array.
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
        for (i=0;i<n;i=i++)
    {
        if(a[i]%2!=0)
        sum=sum+a[i];
            
    }
    printf("sum of all odd elements=%d",sum);
}