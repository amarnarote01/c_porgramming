// Write a C program to perform Addition of two numbers (Using Function without return type with parameter values).
#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    add(a,b);

    return 0;
}
void add(int x,int y)
{
 
    printf("Sum is = %d",x+y);

}