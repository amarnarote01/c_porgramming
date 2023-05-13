// 17)Write a C program to copy all elements from an array to another array.
#include<stdio.h>
int main()
{
    int n,a[100],b[100],i;
    printf("Enter numbers of elements in array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter value at a[%d]:",i);
    scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
     {
        b[i]=a[i];
     }
       for(i=0;i<n;i++)
    {
    printf("\nvalue at b[%d]=%d:",i,b[i]);

    }
}