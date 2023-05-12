// 13)Write a C program to concatenate two Strings without using built-in string function.
#include<stdio.h>
int main()
{
    char a[30],b[30],c[30];
    int i,j;
    printf("Enter two strings\n");
    scanf("%s %s",a,b);
   i=0;
   j=0;
   while(a[i]!='\0')
   {
    c[j]=a[i];
    i++;
    j++;
   }
   i=0;
   while(b[i]!='\0')
   {
    c[j]=b[i];
    i++;
    j++;
   }
    printf("concatenated string=%s\n",c);
    return 0;

}