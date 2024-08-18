#include <stdio.h>

int main(){
    int n;
    char dialogue[200];
    char grade;

    printf("Enter a integer, your grade\n");
    scanf("%d %c", &n, &grade);
    fgetc(stdin);
    printf("Enter your fav dialogue : ");
    fgets(dialogue, 190, stdin);
 

    printf("Number is : %d\nDialogue is : %sGrade is : %c", n, dialogue, grade);


    return 0;
}