#include<stdio.h>
int main()
{
 float x,y,z;
 printf("Enter Angles of triangle");
 scanf("%f %f %f",&x,&y,&z);
 if(x+y+z==180)
printf("Valid triangle");
else 
printf("Invalid triangle");
return 0;

}