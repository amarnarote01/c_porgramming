// 3)Write a C program to Display sum of  non diagonal elements.

#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,sum=0;
    printf("Enter matrix size");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      
    printf("Enter matrix at a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);

    }
    }
        printf("Displaying matrix\n");
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      
    printf("%d\t",a[i][j]);

    }
    printf("\n");
    }
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      if(i!=j)
    sum=sum+a[i][j];

    }
    
    }
    printf("Sum of non diagonal elements =%d ",sum);
    return 0;
}