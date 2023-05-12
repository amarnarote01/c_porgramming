// 4)	Write a C program to find sum of all elements of an array.
#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;
    printf("Enter numbers of elements in array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter value at a[%d]:",i);
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];
    }
    printf("sum of all elements of array=%d",sum);
}