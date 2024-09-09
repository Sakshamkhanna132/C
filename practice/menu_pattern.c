#include <stdio.h>

void pattern1();

int main(){
    //pattern1();
    return 0;
}

void pattern1(){
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j<= 5; j++){
            printf("* ");
        }
        printf("\n");
    }
}