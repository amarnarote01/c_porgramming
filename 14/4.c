// 4)Write a C program to Find out Transpose of Matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n;
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
     printf("Displaying transpose of matrix\n");
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
    
    printf("%d\t",a[j][i]);

    }
    printf("\n");
    }
    return 0;
}