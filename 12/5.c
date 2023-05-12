// 5)Write a C program to reverse the String without using built-in string function.
#include<stdio.h>
int main()
{
    char a[30],b[30];
    int i,end,count=0;

    printf("Enter string\n");
    scanf("%s",a);
     i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
   end=count-1;
   for(i=0;i<count;i++)
   {
    b[i]=a[end];
    end--;

   }

    printf("Reverse of string=%s",b);
    return 0;

}