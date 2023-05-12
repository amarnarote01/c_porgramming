// 2.Write a C program to search an element in an array.
#include<stdio.h>
int main()
{
    int n,a[100],i,num,count=0;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter value of a[%d] =",i);
        scanf("%d",&a[i]);
   
    }
    printf("Enter value you want to search:");
    scanf("%d",&num);
        for (i=0;i<n;i++)
    {
        
        if(num==a[i])
        count++;
    }
   if(count==0)
   printf("Value not found");
   else
   printf("Value found");
   return 0;
}