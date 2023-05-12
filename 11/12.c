// 12)	Write a C program to find Cube of given number (Function with return type without parameter values).
#include<stdio.h>
int cube();
int main()
{
    int c;
    c=cube();
    printf("cube is = %d",c);

    return 0;
}
int cube()
{
    int a,cube;
    printf("Enterno");
    scanf("%d",&a);
    cube=a*a*a;
    return cube;
   
}