//Write a C program to find Circumference of circle (Using Function without return type with parameter values).

#include<stdio.h>
void circle(float);
int main()
{
    float r;
    printf("Enter radius of circle");
    scanf("%f",&r);
    circle(r);

    return 0;
}
void circle(float x)
{
    
    printf("circumference is = %.2f",2*3.14*x);

}