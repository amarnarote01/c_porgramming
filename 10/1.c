// 1.Write a C program to read and print all elements of array.
#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
    printf("all elements of array");
        for (i=0;i<n;i++)
    {
             printf("\nvalue of a[%d]=%d",i,a[i]);
    }
}