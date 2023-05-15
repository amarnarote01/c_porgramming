// 	Write a C program to find Area of circle(Function with return type without parameter values).
#include<stdio.h>
float circle();
int main()
{
    float area;
    area=circle();
printf("Area of circle is=%.2f",area);
    return 0;

}
float circle()
{
    float r,area;
    printf("Enter radius  of circle");
    scanf("%f",&r);
 
    area=3.14*r*r;
    return area;

} 