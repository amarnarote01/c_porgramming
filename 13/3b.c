//Write a C program to perform conversion from Fahrenheit to Celsius  (Using Function without return type with parameter values)celsius = ((fahrenheit-32)*5)/9
#include<stdio.h>
void con(float);
int main()
{
    float f;
    printf("Enter fahrenheit");
    scanf("%f",&f);
    con(f);

    return 0;
}
void con(float a)
{
    float c;
    c=((a-32)*5/9);
    printf("%f celcius ",c);

}