// Write a C program to perform Addition of two numbers (Function with return type with parameter values).
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,ans;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    ans=add(a,b);
    printf("Sum is = %d",ans);

    return 0;
}
int add(int x,int y)
{
  
  return x+y;
    

}