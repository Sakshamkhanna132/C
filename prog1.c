#include <stdio.h>
#include <conio.h>

int main(){

int num1, num2 , sum;

printf("Enter the first num");
scanf("%d",  &num1);

printf("Enter the second num");
scanf("%d",  &num2);

sum = num1 + num2;

printf("Sum of %d and %d is %d\n", num1, num2, sum);
getch();

return 0;

}

/*
variable decalration and initialisation

int a;
int b;

or int a , b, c;

a = 90;
b = a;


int a = 90;
int b = 80;

int a = 9, b = 90, c = 80;
int a = b = c = 100;



*/



/* 

#include <header ka naam>

int main(){
	return -23;
	
}

*/


/*

# --->> preprocessor directive
include --->> tells C compiler to include / add mentioned headers in the file
<header> --->> the package/code snippet/ header we want to use the functions or variables of



*/


/*

primary datatype - these are the principle types of values which C handles 
- real numbers
- characters
- integers 
secondary datatype - they are combination of primary datatypes
- array
- pointer
- enum
- struct
- union
- etc etc 

*/