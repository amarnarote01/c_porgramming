// Write a C program to find Area of rectangle(Using Function with return type with parameter values).
#include<stdio.h>
float rec(float,float);
int main()
{
    float l,b,ans;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    ans=rec(l,b);
    printf("area is = %.2f",ans);

    return 0;
}
float rec(float a,float b)
{
   
    return a*b;

}