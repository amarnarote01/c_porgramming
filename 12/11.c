// 11)Write a C program to compare two strings without using built-in string function.
#include<stdio.h>
int cmp(char[],char[]);
int main()
{
    char a[30],b[30];
    int ans;
    printf("Enter two strings\n");
    scanf("%s %s",a,b);
    ans=cmp(a,b);
    if(ans==0)
    printf("Equal strings");
    else 
    printf("Unequal strings");
    return 0;

}
int cmp(char a[],char b[])
{
    int i,count=0;
    i=0;
       while(a[i]!='\0' && b[i]!='\0')
       {
        if(a[i]!=b[i])
        { count=1;
         break;
        }
        i++;
       }
    return count;
}