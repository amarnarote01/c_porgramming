// Write a C program to perform conversion from Kilometer to meter (Using Function with return type with parameter values).
#include<stdio.h>
float con(float);
int main()
{
    float n,ans;
    printf("Enter value in km");
    scanf("%f",&n);
    ans=con(n);
    printf("%.2fkm =%.2fm",n,ans);

    return 0;
}
float con(float x)
{
   return x*1000;

}