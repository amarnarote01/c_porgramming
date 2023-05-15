// Write a C program to perform Calculator operation (Using Function without return type with parameter values).
#include<stdio.h>
float calc_add(float,float);
float calc_sub(float,float);
float calc_mul(float,float);
float calc_div(float,float);
int main()
{
  float n1,n2,add,sub,mul,div;

  printf("\nEnter the number:");
  scanf("%f %f",&n1,&n2);
  add=calc_add(n1,n2);
  printf("The addition of two number is:%f\n",add);
  sub=calc_sub(n1,n2);
  printf("The subtraction of two number is:%f\n",sub);
  mul=calc_mul(n1,n2);
  printf("The Multiplication of two number is:%f\n",mul);
  div=calc_div(n1,n2);
  printf("The division of two number is:%f\n",div);
  return 0;
}
float calc_add(float n1,float n2)
{
return (n1+n2);
}
float calc_sub(float n1,float n2)
{
return (n1-n2);
}
float calc_mul(float n1,float n2)
{
 return (n1*n2);
}
float calc_div(float n1,float n2)
{
 return (n1/n2);
}