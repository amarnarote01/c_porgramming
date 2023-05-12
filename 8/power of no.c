#include<stdio.h>
int power(int,int);
int main()
{
     int b,e,po;
    printf("Enter base and exponent");
    scanf("%d %d",&b,&e);
    po=power(b,e);
    printf("power is  = %d",po);

    return 0;
}
int power(int b,int e)
{
     int p;
    
  
   if(e==0)
   return 1;
   else
   p=b*power(b,e-1);
    return p;

}