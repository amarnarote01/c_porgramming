// 10)Write a C program to compare two strings using built-in string function.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    int ans;
    printf("Enter two strings\n");
    scanf("%s %s",a,b);
    ans=strcmp(a,b);
    if(ans==0)
    printf("Equal strings");
    else 
    printf("Unequal strings");
    return 0;

}