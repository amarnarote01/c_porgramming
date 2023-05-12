// 20)Write a C program for sorting element in array in descending array.
#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp;
    printf("Enter numbers of elements in array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter value at a[%d]:",i);
    scanf("%d",&a[i]);
    }
 
    
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
            
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
   printf("Values after sorting");
  for(i=0;i<n;i++)
    {
    printf("\na[%d]=%d:",i,a[i]);

    }
}