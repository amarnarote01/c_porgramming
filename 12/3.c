// 3)Write a C program to find length of string without using built-in string function.
#include<stdio.h>
int main()
{
    char a[30];
    int i,count=0;
    printf("Enter string\n");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }

    printf("length of string is %d",count);
    return 0;

}