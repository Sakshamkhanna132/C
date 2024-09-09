/* 
count to 50 
for each number pass that number to a function
this function should accept the number and check if its prime or not 
if its prime send 1 if not send 0 
and in main() function check the value returned by the prime() function
and add if its prime
*/

#include <stdio.h>

int prime(int x);

int main() {

    for(int i = 0; i <= 50; i++){
        if(prime(i) == 1) {
            printf("%d, ", i);
        }
    }
    
    return 0;
}

int prime(int x){
    if (x == 1 || x == 0){
        return 0;
    }
    for(int j = 2; j <= x / 2; j++) {
        if(x % j == 0) {
            return 0;
        }  
    }
    return 1;
}