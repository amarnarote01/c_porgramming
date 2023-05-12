// 9)Write a C program to convert the string to Lowercase without using built-in string function.
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
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        i++;
    }
    printf("Lower case =%s",a);
    return 0;
}