// 6)Write a C program to Find Multiplication of two matrices.
#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3],x,i,j,n;

    
printf("enter size ");
scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
     c[i][j]=0;
    }
  }
  
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter the value at a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter the value at b[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  printf("Matrix a is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("Matrix b is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
    printf("Matrix multiplication:\n");
  for(i=0;i<n;i++)
  {
   for(j=0,x=0;j<n || x<n;j++,x++)
    // for(j=0;j<3;j++)
    {
    //   c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
  
   c[i][j]=c[i][j] +(a[i][x]*b[x][j]);
    }
    
    printf("\n");
  }
  printf("Matrix c is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  

}