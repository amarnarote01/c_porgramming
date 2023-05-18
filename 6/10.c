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

    for(i=1;i<=n;i++)
    {
   
        for(j=1;j<=i;j++)
        {   if(i%2!=0)
            printf("*");
        }
        printf("\n");
    
    }


}