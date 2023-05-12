//Write a C program to add two numbers given by user using pointer. [Hint: void add(int*n1,int*n2,int*sum) ]
#include<stdio.h>
void add(int*,int*,int*);
int main()
{ 
    int a,b,s=0;
    printf("Enter two no:");
    scanf("%d %d",&a,&b);

    add(&a,&b,&s);
    
printf("Sum is =%d",s);


    return 0;
}
void add(int*n1,int*n2,int*sum)
{
    *sum=*n1+*n2;
}