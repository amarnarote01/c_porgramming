// 13)Write a C program to find reverse of given number (Using Function with return type without parameter values.).
#include<stdio.h>
int rev();
int main()
{
    int ans;
    ans=rev();
    printf("reverse is  = %d",ans);

    return 0;
}
int rev()
{
    int i,n,r,sum=0;
    printf("Enter no");
    scanf("%d",&n);
    for(i=n;n>0;i++)
    {
     r=n%10;
     sum=(sum*10)+r;
     n=n/10;
        
    }
    return sum;

}