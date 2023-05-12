#include<stdio.h>
int main()
{
    int i,j,n,sum=97,x;
    printf("Enter value");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        x=sum;
        for(j=1;j<=i;j++)
        {
        printf("%c",x++);
        }
        printf("\n");
        sum++;
    }


}