#include <stdio.h>

/**
 * The main function takes an integer input from the user and prints whether the number is even or odd.
 *
 * @return 0 indicating successful execution
 */
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
