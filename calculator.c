#include <stdio.h>

int main (){
    int num1, num2;
    char sign[100];
    long double result;

printf("Enter the first number");
scanf("%d", &num1);
printf("Enter the second number");
scanf("%d", &num2);

printf("Enter the operation");
scanf(" %c", &sign);

if(sign == '+'){
    result = num1 + num2;
    printf("Result: %.3f\n", result);
    }
else if(sign == '-'){
    result = num1 - num2;
    printf("Result: %.3f\n", result);
}
else if(sign == '*'){
    result = num1 * num2;
    printf("Result: %.3f\n", result);
}
else if(sign == '/'){
    result = num1 / num2;
    printf("Result: %.3f\n", result);
} else {
    printf("error");
}

return 0;



}