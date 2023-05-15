//Write a C program to perform conversion from Fahrenheit to Celsius  (Using Function with return type with parameter values)celsius = ((fahrenheit-32)*5)/9
#include<stdio.h>
float con(float);
int main()
{
    float f,c;
    printf("Enter fahrenheit");
    scanf("%f",&f);
    c=con(f);
    printf("%f celcius ",c);

    return 0;
}
float con(float a)
{
    float c;
    c=((a-32)*5/9);
    return c;
   

}