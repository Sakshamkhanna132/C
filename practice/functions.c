#include <stdio.h>

//function declaration
int add(int x, int y);
int mult (int p, int q);



int main() {

int a = 0, b = 0, s = 0, p = 0;
printf("Enter the first number");
scanf("%d %d", &a, &b);

s = add(a, b);
p = mult(a, b);

printf("Sum is %d", s);
printf("Product is %d", p);

return 0;

}

int add (int x, int y) {

return x + y;

} 

int mult (int p, int q) {

return p * q;

}