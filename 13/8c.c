// Write a C program to find Perimeter of rectangle(Function with return type without parameter values).
#include<stdio.h>
float rec();
int main()
{
    float p;
  
    p=rec();
    printf("perimeter is = %.2f",p);

    return 0;
}
float rec()
{
    float l,b;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    return 2*(l+b);
   

}