#include <stdio.h>

int main() {

    int num = 2, count = 0;
    while(count < 10) {
        int Prime = 1, i = 2;
        for(; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;

}