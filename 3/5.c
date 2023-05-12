#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter three sides of triangle");
    scanf("%f %f %f",&x,&y,&z);
    if((x+y)>z && (x+z)>y && (y+z)>x)
    printf("triangle is valid");
    else 
    printf("triangle is invalid");
    return 0;
}