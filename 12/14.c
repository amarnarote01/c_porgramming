// 14)Write a C program to copy String into another String using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("Enter  string\n");
    scanf("%s",b);
    strcpy(b,a);
    printf("copied  string=%s\n",b);

}