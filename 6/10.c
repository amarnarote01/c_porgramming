/*10)Write a C program to print following pattern
*
*	*	*
*	*	*	*	*
*	*	*	*	*	*	*  
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value");
    scanf("%d",&n);
    n=(n*2)-1;
    for(i=1;i<=n;i=i+2)
    {
   
        for(j=1;j<=i;j++)
        { 
            printf("*");
        }
        printf("\n");
    
    }


}