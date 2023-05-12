#include<stdio.h>
int main()
{ 
float P , R , T , SI ;

printf("Enter principle Rate And Time");
scanf("%f %f %f",&P,&R,&T);
SI = (P*R*T)/100;
printf("\n\n Simple Interest is : %f", SI);

return 0;
}