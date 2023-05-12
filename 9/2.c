//Write a C program to print value of number using pointer.
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("value of number using pointe=%u",*p);
    return 0;
}