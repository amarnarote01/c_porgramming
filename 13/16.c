// 16)Write a C program to perform Calculator operation (Using Function without return type without parameter values.).

#include<stdio.h>
void cal();
void add();
void sub();
void mul();
void div();
int main()
{
    cal();
    return 0;
}
void cal()
{
        int ch;
    printf("Below are choices\n 1.Addition\n 2.substraction \n 3.Multiplication\n 4.division \n 5.Exit");
    printf("\nEnter you choice");
    scanf("%d",&ch);
    switch(ch)
{
   case 1: add();
   break;
   case 2: sub();
   break;
   case 3: mul();
   break;
   case 4: div();
   case 5: printf("Thank you");
   break;
   default : printf("Envalid choice");


}

}
void add()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    printf("Sum is = %d",a+b);

}
void sub()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    printf("substraction is = %d",a-b);

}
void mul()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    printf("multiplication is = %d",a*b);

}
void div()
{
    float a,b;
    printf("Enter two no");
    scanf("%f %f",&a,&b);
    printf("division is = %f",a/b);

}