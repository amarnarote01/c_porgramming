// 21)	Write a C program to find reverse of given number(Function with return type without parameter values).
#include<stdio.h>
int sum();
int main()
{
    int s;
    s=sum();
    printf("Sum of digits  = %d",s);

    return 0;
}
int sum()
{
    int x;
    printf("Enter no");
    scanf("%d",&x);

    int i,r,sum=0;
    for(i=x;x>0;i++)
    {
     r=x%10;
     sum=(sum*10)+r;
     x=x/10;
        
    }
   return sum;
   

}