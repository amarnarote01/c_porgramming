// 6.Write a C program to print all Even value elements in an array.
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
    printf("Even value elements in an array");
        for (i=0;i<n;i++)
    {
        if(a[i]%2==0)
             printf("\n even value is a[%d]= %d",i,a[i]);
    }
}