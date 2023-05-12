#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float avg;
    
    
    printf("Enter marks of five subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    
    for(i = 0; i < 5; i++) {
        total += marks[i];
    }
    
    avg = (float)total / 5.0;

    printf("\nTotal marks = %d\n", total);
    printf("Average marks = %.2f\n", avg);
    
    return 0;
}

