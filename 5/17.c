#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
    if(c==1)
    printf("It is a prime no");
    else
     printf("It is not a prime no");
}