#include<stdio.h>
int main()
{ int x ,y;
 printf("Enter amount");
 scanf("%d",&x);
 if( x>500)
 {
 y=x/500;
 printf("\n500= %d",y);
 }
 if(x>200)
 {
 y=x/200;
 printf("\n200= %d",y);
 }
 if(x>100)
 {
 y=x/100;
 printf("\n100= %d",y);
 }
 if(x>10)
 {
 y=x/10;
 printf("\n10= %d",y);
 }
 return 0;

}