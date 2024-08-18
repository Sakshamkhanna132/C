#include <stdio.h>

int main(){
int num1;
int s = 0;
printf("Enter any 3 digit number");
scanf("%d", &num1);

s = s + num1%10;
num1 = num1/10;

s = s + num1%10;
num1 = num1/10;

s = s + num1%10;
num1 = num1/10;


printf("sum is %d", s);

return 0;
}