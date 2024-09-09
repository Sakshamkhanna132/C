#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0, max = 0, min = 0, n = 0;

    printf("Enter number of marks : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Give an input : ");
        scanf("%d", &marks[i]);
    }

    max = marks[0];
    min = marks[0];

    for (int i = 0; i < n; i++){
        sum += marks[i];
        if (marks[i] > max) {
            max = marks[i];
        }

        if (marks[i] < min) {
            min = marks[i];
        } 
    }

    printf("Sum : %d\nMax : %d\nMin : %d", sum, max, min);


    return 0;
}