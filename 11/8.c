// 8)	Write a C program to find length of character array without using built-in string function.
#include<stdio.h>
int main()
{
    char a[30];
    int len=0,i;
    printf("Enter you name:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of string is=%d",len);
}