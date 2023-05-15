// 3)Write a C program to perform conversion from Fahrenheit to Celsius  (Using Function without return type without parameter values.).
#include<stdio.h>
void con();
int main()
{
    con();

    return 0;
}
void con()
{
    float c,f;
    printf("Enter fahrenheit");
    scanf("%f",&f);
    c=((f-32)*5/9);
    printf("%f celcius ",c);

}