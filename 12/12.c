// 12)Write a C program to concatenate two Strings using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("Enter two strings\n");
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("concatenated string=%s\n",a);

}