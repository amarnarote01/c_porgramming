#include<stdio.h>
void sum();
int main()
{
    sum();

    return 0;
}
void sum()
{
    int n,i,sum=0;
    printf("Enter no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
 printf("Sum is = %d",sum);
   

}