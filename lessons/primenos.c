#include <stdio.h>

int main() {
    int num = 2, count = 0;
    while (count < 10) {
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;
}