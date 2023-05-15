//Write a C program to find Cube of given number (Using Function with return type with parameter values).
#include<stdio.h>
int cube(int );
int main()
{
    int a,ans;
    printf("Enterno");
    scanf("%d",&a);
    ans=cube(a);
    printf("cube is = %d",ans);

    return 0;
}
int cube(int x)
{
  
return x*x*x;

}
