// 7)Write a C program to convert the string to Uppercase without using built-in string function.
#include<stdio.h>
int main()
{
    char a[30];
    int i;
    printf("Enter string\n");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("Uppercase =%s",a);
    return 0;

}