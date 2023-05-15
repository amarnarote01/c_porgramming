//Write a C program to find Perimeter of rectangle(Using Function without return type with parameter values).
#include<stdio.h>
void rec(float,float);
int main()
{
    
    float l,b;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    rec(l,b);

    return 0;
}
void rec(float x,float y)
{
    printf("perimeter is = %.2f",2*(x+y));

}