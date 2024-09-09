#include <stdio.h>

int main(){
int num1;

for (int i = 0; i <= 5; i++){
	printf("\nEnter any number : ");
scanf ("%d", &num1);
if (num1 % 2 == 0){
	printf("\nEven");
} else {
	printf("\nOdd");
}
}

return 0;

}
