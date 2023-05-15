// 6)Write a C program to find Area of rectangle (Using Function without return type without parameter values.).
#include<stdio.h>
void rec();
int main()
{
    rec();

    return 0;
}
void rec()
{
    float l,b;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    printf("area is = %.2f",l*b);

}