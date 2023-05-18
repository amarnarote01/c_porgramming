#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],c1=0,i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
      
    printf("Enter matrix at a[%d]=",i);
    scanf("%d",&a[i][j]);

    }
    }
     for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
      
    printf("Enter matrix at b[%d]=",i);
    scanf("%d",&b[i][j]);

    }
    }
       for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
     c1=c1+a[i][j]*b[j][i];

    }
   
    printf("%d\t",c1);
    c1=0;
    
      
    }

}