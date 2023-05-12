// 18)Write a C program to find reverse of given number(Using Function without return type with parameter values).
#include<stdio.h>
void rev(int);
int main()
{
    int n;
    printf("Enter no");
    scanf("%d",&n);
    rev(n);

    return 0;
}
void rev(int x)
{
    int i,r,sum=0;
    for(i=x;x>0;i++)
    {
     r=x%10;
     sum=(sum*10)+r;
     x=x/10;
        
    }
 printf("reverse is  = %d",sum);
   

}