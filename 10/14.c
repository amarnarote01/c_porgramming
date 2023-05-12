// 14.Write a C program to find maximum element in an array.
#include<stdio.h>
int main()
{
    int n,a[100],i,max=0;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
        for (i=0;i<n;i++)
    {
            if(a[i]>max)
            {
                max=a[i];
            }

    }
    printf("\nmaximum element in an array=%d ",max);
}
