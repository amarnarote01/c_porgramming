// 11)	Write a C program to perform conversion from Fahrenheit to Celsius  (Function with return type without parameter values).
#include<stdio.h>
float con();
int main()
{
    float c;
    c=con();
    printf("%f celcius ",c);
    return 0;
}
float con()
{
    float c,f;
    printf("Enter fahrenheit");
    scanf("%f",&f);
    c=((f-32)*5/9);
    return c;
    

}