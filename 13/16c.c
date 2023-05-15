// Write a C program to perform Calculator operation (Function with return type without parameter values).
#include<stdio.h>
float calc_add();
float calc_sub();
float calc_mul();
float calc_div();
int main()
{   
  float sum,sub,mul,div;
  int ch;
   printf("Below are the choices\n1.addition\n2.substraction\n3.multiplication\n4.divsion\n");
   printf("Enter Your choice:");
   scanf("%d",&ch);


switch(ch)
{


  case 1:
          sum=calc_add();
          printf("The addition of two number is:%.2f\n",sum);
          break;
  
  case 2: 
          sub=calc_sub();
          printf("The subtraction of two number is:%.2f\n",sub);
          break;
  
  case 3: 
          mul=calc_mul();
          printf("The Multiplication of two number is:%.2f\n",mul);
          break;
  
  case 4:     
          div=calc_div();
          printf("The division of two number is:%.2f\n",div);
          break;
  default : printf("Invalid ");
}
  return 0;
}
float calc_add()
{
  float n1,n2;
  printf("\nEnter two the number:");
  scanf("%f %f",&n1,&n2);
  return n1+n2;

}
float calc_sub()
{
  float n1,n2;
  printf("\nEnter two the number:");
  scanf("%f %f",&n1,&n2);
  return n1-n2;

}
float calc_mul()
{
  float n1,n2;
  printf("\nEnter two the number:");
  scanf("%f %f",&n1,&n2);
  return n1*n2;

}
float calc_div()
{
  float n1,n2;
  printf("\nEnter two the number:");
  scanf("%f %f",&n1,&n2);
  return n1/n2;

}