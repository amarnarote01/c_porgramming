// 17.Write a C program to count total number of odd value elements in an array.
#include<stdio.h>
int main()
{
    int n,a[100],i,count=0;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
        for (i=0;i<n;i++)
    {
        if(a[i]%2!=0)
             count++;
    }
    printf("count total number of odd value elements in an array=%d",count);

}