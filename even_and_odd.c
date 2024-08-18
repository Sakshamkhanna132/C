/* In this code we will tell th euser if the number entered by them is even or odd */



#include <stdio.h>

int main() {
    int num1;
    printf("Enter any number: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
