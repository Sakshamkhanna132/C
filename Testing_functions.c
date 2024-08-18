#include <stdio.h>

// Function declaration
int add(int, int);

int main() {
    int sum;
    
    // Function call
    sum = add(5, 10);
    
    printf("Sum: %d", sum);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
