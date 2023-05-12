// 10)	Write a C program to perform conversion from Kilometer to meter (Function with return type without parameter values).
#include<stdio.h>
float con();
int main()
{
    float n;
   n=con();
   printf("the conversion is %.2f m",n);

    return 0;
}
float con()
{
    float x;
    printf("Enter value in km");
    scanf("%f",&x);
    x=x*1000;
    return x;

}