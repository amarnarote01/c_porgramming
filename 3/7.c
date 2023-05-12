#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price and selling price");
    scanf("%d%d",&cp,&sp);
    if((sp-cp)>0)
    printf("Profit is %d",sp-cp);
    else
    
    printf("Loss is %d",cp-sp);
    
    return 0;

}