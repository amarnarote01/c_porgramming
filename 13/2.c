// 2)Write a C program to perform conversion from Kilometer to meter  (Using Function without return type without parameter values.).
#include<stdio.h>
void con();
int main()
{
   con();


    return 0;
}
void con()
{
    float x;
    printf("Enter value in km");
    scanf("%f",&x);
    x=x*1000;
    printf("the conversion is %.2f m",x);
  

}
