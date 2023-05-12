// 8)Write a C program to convert the string to lowercase using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    printf("Enter string\n");
    scanf("%s",a);
    strlwr(a);
    printf("lowercase =%s",a);
    return 0;

}