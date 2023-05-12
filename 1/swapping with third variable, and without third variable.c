#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
  
    c = a;
    a = b;
    b = c;
    printf("After swapping using third variable: num1 = %d, num2 = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using third variable: num1 = %d, num2 = %d\n", a, b);
    
    return 0;
}
