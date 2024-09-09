#include <stdio.h>

int main() {
    int sum = 0;
    for(int n = 7; n <= 50; n += 7) {
            sum += n;
    }
    printf("Sum: %d\n", sum);
    return 0;
}