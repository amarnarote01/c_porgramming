// 4)Write a C program to reverse the String using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];

    printf("Enter string\n");
    scanf("%s",a);
    strrev(a);
    printf("Reverse of string=%s",a);
    return 0;

}