#include<stdio.h>
int main()
{
 float b,hra,da,g;
 printf("Enter your Basic Salary");
 scanf("%f",&b);
 if(b<=10000)
{
 hra=b*0.2;
 da=b*0.8;
 g=b+hra+da;   
 printf("Gross salary is %.2f",g);
}
else  if(b<=20000)
{
 hra=b*0.25;
 da=b*0.9;
 g=b+hra+da;   
 printf("Gross salary is %.2f",g);
}
else 
{
 hra=b*0.3;
 da=b*0.95;
 g=b+hra+da;   
 printf("Gross salary is %.2f",g);
}
return 0;
}