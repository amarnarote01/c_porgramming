//Write a C program to find Circumference of circle (Using Function with return type with parameter values).

#include<stdio.h>
float circle(float);
int main()
{
    float r,ans;
    printf("Enter radius of circle");
    scanf("%f",&r);
    ans=circle(r);    
    printf("circumference is = %.2f",ans);


    return 0;
}
float circle(float x)
{
    return 2*3.14*x;

}