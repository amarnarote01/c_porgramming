// 6)Write a C program to convert the string to Uppercase using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("Enter string\n");
    scanf("%s",a);
    strupr(a);
    printf("Uppercase =%s",a);
    return 0;

}