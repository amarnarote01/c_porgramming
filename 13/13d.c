// Write a C program to find reverse of given number(Using Function with return type with parameter values).
#include<stdio.h>
int rev(int);
int main()
{
    int n,ans;
    printf("Enter no");
    scanf("%d",&n);
    ans=rev(n);
    printf("reverse is  = %d",ans);

    return 0;
}
int rev(int x)
{
    int i,r,sum=0;
    for(i=x;x>0;i++)
    {
     r=x%10;
     sum=(sum*10)+r;
     x=x/10;
        
    }
 return sum;
   

} 