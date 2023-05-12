//Write a C program to swap two numbers given by user using pointer.
#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
   *p=*p+*q;
   *q=*p-*q;
   *p=*p-*q;

    printf("value of a=%d,b=%d",*p,*q);

    return 0;
}