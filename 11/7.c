// 7)	Write a C program to find length of  character array using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int len;
    printf("Enter you name:");
    scanf("%s",a);
    len=strlen(a);  
    printf("Length of string is=%d",len);
}