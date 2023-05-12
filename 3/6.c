#include<stdio.h>
int main()
{
 float x,y,z;
 printf("Enter sides of triangle");
 scanf("%f %f %f",&x,&y,&z);
 if( x==y && x==z && y==z)
printf("Equilateral triangle");
else if(x!=y && x!=z && y!=z )
printf("Scalene triangle");
else 
printf("Isoscales triangle");
return 0;

}