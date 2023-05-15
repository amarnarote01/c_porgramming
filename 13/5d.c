// Write a C program to find Area of circle(Using Function with return type with parameter values).
#include<stdio.h>
float circle(float);
int main()
{
    float r,area;
    printf("Enter radius  of circle");
    scanf("%f",&r);
    area=circle(r);
    printf("area is = %.2f",area);

    return 0;
}
float circle(float x)
{
   float area;
    area=3.14*x*x;
    return area;

}