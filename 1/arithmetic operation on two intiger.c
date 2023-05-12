#include <stdio.h>

int main() 
{
    int p, q;
    float sum, sub, mul, mod;
    float div;
    printf("Enter any two integer numbers:\n");
    scanf("%d%d", &p, &q);
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = p / q;
    mod = p % q;
    printf("Addition of       %d + %d = %d\n", p, q, sum);
    printf("Subtraction of    %d - %d = %d\n", p, q, sub);
    printf("Multiplication of %d * %d = %d\n", p, q, mul);
    printf("Division of       %d / %d = %f\n", p, q, div);
    printf("Modulus of        %d %% %d = %d\n", p, q, mod);
    return 0;
}