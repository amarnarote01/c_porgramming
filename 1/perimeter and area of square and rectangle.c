#include<stdio.h>
int main()
{ 
  float length, width, area,parameter,s ,as,ps;
    printf("Enter length and width of Rectangle");
    scanf("%f %f",&length,&width);
    printf("Enter length side of square");
    scanf("%f",&s);
    area = length * width;
    printf("Area of Rectangle : %.2f", area);
    parameter = 2*(length+width);
    printf("parameter of rectangle : %.2f", parameter);
    as = s*s;
    printf("Area of square : %.2f", as);
    ps = 4*s;
    printf("Parameter of square  : %.2f", ps);
    
    return 0;
}