// Write a C program to perform conversion from Kilometer to meter (Using Function without return type with parameter values).
#include<stdio.h>
void con(float);
int main()
{
    float n;
    printf("Enter value in km");
    scanf("%f",&n);
    con(n);

    return 0;
}
void con(float x)
{
   
    printf("%.2fkm =%.2fm",x,x*1000);

}