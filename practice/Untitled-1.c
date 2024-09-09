#include <stdio.h>

int main(){
int num1;
int c = 0;
printf("Enter any year : ");
scanf("%d", &num1);
if (num1 % 4 == 0){
	if (num1 % 100 == 0){
		if (num1 % 400 == 0){
			c = 1;
		} 
	} else {
		c = 1;
	}
}

if ( c == 1 ) {
	printf("leap year ");
}
else {
	printf("not a leap year");
}

return 0;

}