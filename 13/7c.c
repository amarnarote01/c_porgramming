// Write a C program to find Circumference of circle (Function with return type without parameter values).
#include<stdio.h>
float circle();
int main()
{ 
    float c;
   
    c=circle();
    printf("circumference is = %.2f",c);

    return 0;
}
float circle()
{
    float r;
    printf("Enter radius of circle");
    scanf("%f",&r);
    return 2*3.14*r;
   

}