#include <stdio.h>

int main()
 {
    int a, b, c, greatest;
    

    printf("Enter Any three number: ");
    scanf("%d%d%d", &a,&b,&c);
    greatest = (a > b && a > c) ? a : (b > c) ? b : c;
    
    printf("The greatest number among %d, %d and %d is %d\n", a, b, c, greatest);
    
    return 0;
}

