#include<stdio.h>
int main()
{
    int i,j,n,k=65,x;
    printf("Enter value");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        x=k;
        for(j=1;j<=i;j++)
        {
        printf("%c",x++);
        }
        printf("\n");
        k++;
    }


}