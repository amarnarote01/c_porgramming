//Write a C program to print sum of 1 to n numbers where n is  given by user using pointer. [Hint: void sum_of(int*n,int*sum) ]
#include<stdio.h>
void sum_of(int*,int*);
int main()
{
    int a,s=0;
   
    printf("Enter value");
    scanf("%d",&a);
    sum_of(&a,&s);
    printf("sum is=%d",s);
    return 0;

}
void sum_of(int*n,int*sum)
{
  int i;
 
  for(i=*n;i>0;i--)
   {
       *sum=*sum+i;
       
    }   

}