/*13)Write a C program to print following pattern
1
01
101
0101*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
        printf("1");
        else 
         printf("0");
        }
        printf("\n");
    }


}