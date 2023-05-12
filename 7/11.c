#include<stdio.h>
int main()
{
    int i,j,n,sum=65;
    printf("Enter no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",sum);
            sum=sum+2;
        }
        printf("\n");
    }
    return 0;
}