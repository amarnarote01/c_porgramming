// 13)Write a C program to find reverse of given number (Using Function without return type without parameter values.).
#include<stdio.h>
void rev();
int main()
{
    rev();

    return 0;
}
void rev()
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
 printf("reverse is  = %d",sum);
   

}