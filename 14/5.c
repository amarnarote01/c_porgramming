// 5)Write a C program to Find Sum of two matrices.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;
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
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      
    printf("Enter matrix at b[%d][%d]=",i,j);
    scanf("%d",&b[i][j]);

    }
    }
        printf("Displaying matrix a \n");
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      
    printf("%d\t",a[i][j]);

    }
    printf("\n");
    }  printf("Displaying matrix b \n");
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      
    printf("%d\t",b[i][j]);

    }
    printf("\n");
    }
     printf("Addition of matrix \n");
        for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[j][i]);

    }
    printf("\n");
    }
    return 0;
}