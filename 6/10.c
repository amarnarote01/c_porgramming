#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
     if(i%2!=0)
   
    {
        
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    
    
    }
    
    }


}