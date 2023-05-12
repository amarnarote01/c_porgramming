// 14)	Write a C program to find Area of rectangle(Function with return type without parameter values).
#include<stdio.h>
float rec();
int main()
{
  float area;
    area=rec();
    printf("area is = %.2f",area);

    return 0;
}
float rec()
{ 
     float l,b;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    return l*b;
   
    
}