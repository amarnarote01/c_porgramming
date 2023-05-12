//Write a C program to find Cube of given number (Using Function without return type with parameter values).
#include<stdio.h>
void cube(int );
int main()
{
    int a;
    printf("Enterno");
    scanf("%d",&a);
    cube(a);

    return 0;
}
void cube(int x)
{
  
    printf("cube is = %d",x*x*x);

}
