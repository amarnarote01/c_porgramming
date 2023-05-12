//7.Write a C program to print all positive value elements in an array.
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
    printf("positive value elements in an array.");
        for (i=0;i<n;i++)
    {
        if(a[i]>=0)
             printf("\n vpositive value is a[%d]= %d",i,a[i]);
    }
}