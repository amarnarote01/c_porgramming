// 4.Write a C program to print all elements in an array which are at odd index.
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
    printf("array which are at odd index");
        for (i=1;i<n;i=i+2)
    {
             printf("\narray at odd index a[%d]=%d",i,a[i]);
    }
}