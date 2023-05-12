// 20.Write a C program to copy all elements from an array to another array.
#include<stdio.h>
int main()
{
    int n,a[100],i,b[100];
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
        for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("copy of all elements from one array to another array");
        for (i=0;i<n;i++)
    {
             printf("\nvalue of b[%d]=%d",i,b[i]);
    }
}