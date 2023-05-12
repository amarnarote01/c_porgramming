// 2)Write a C program to find length of string using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int l;
    printf("Enter string\n");
    scanf("%s",a);
    l=strlen(a);
    printf("length of string is %d",l);
    return 0;

}