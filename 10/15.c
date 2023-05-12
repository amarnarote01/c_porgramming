// 15.Write a C program to find minimum element in an array.
#include<stdio.h>
int main()
{
    int n,a[100],i,min=0;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }min=a[0];
        for (i=0;i<n;i++)
    {
            if(a[i]<min)
            {
                min=a[i];
            }

    }
    printf("\nminimum element in an array=%d ",min);
}
