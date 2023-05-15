// 7)Write a C program to find Circumference of circle (Using Function without return type without parameter values.).
#include<stdio.h>
void circle();
int main()
{
    circle();

    return 0;
}
void circle()
{
    float r;
    printf("Enter radius of circle");
    scanf("%f",&r);
    printf("circumference is = %.2f",2*3.14*r);

}