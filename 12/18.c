// 18)Write a C program to search element in array.
#include<stdio.h>
int main()
{
    int n,a[100],i,x,count=0;
    printf("Enter numbers of elements in array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter value at a[%d]:",i);
    scanf("%d",&a[i]);
    }
    printf("Enter elemengt you want to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
     {
      if(a[i]==x)
      count++;
     }
     if(count==0)
     printf("Element not found");
     else 
       printf("Element found");

}