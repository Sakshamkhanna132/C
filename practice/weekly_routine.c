#include <stdio.h>

int main() {
    int count;
    int time;
    while (1){
    
    printf("Enter a number between 1-7\nEnter 0 to exit\n");
    scanf("%d", &count);
    if ( count == 0 ){
        break;
    }
    printf("Enter the time of which you want the routine\n");
    scanf("%d", &time);
    switch(count) {
        case 1:
        printf("Monday Routine:\n\n");
        if(time == 1){ 
            
            printf("7:00 AM - Wake up, hydrate, stretch\n");
            printf("7:15 AM - Morning routine and breakfast\n");
            printf("7:45 AM - Plan your day\n\n");
            printf("Work/Study:\n");
            printf("8:00 AM - 10:00 AM - Focused work or study\n");
            printf("10:00 AM - Quick break\n");
            printf("10:15 AM - 12:00 PM - Continue work/study\n\n");
            printf("12:00 PM - 1:00 PM - Lunch and relax\n\n");
        } else if(time == 2){
            printf("Afternoon:\n");
            printf("1:00 PM - 3:00 PM - More work/study\n");
            printf("3:00 PM - Short break, stretch or walk\n\n");
        } else if(time == 3){
            printf("Evening:\n");
            printf("3:30 PM - 5:30 PM - Finish up work/study\n");
            printf("5:30 PM - Exercise or hobbies\n\n");
        } else if(time == 4){
            printf("Night:\n");
            printf("7:00 PM - Dinner\n");
            printf("8:00 PM - 9:30 PM - Leisure time (reading, TV, etc.)\n");
            printf("10:00 PM - Wind down and sleep\n");
        } else {
            printf("Invalid input\n");
        }
            break;

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            // Similar routine, you can modify as needed
            printf("Routine for day %d\n\n", count);
            printf("7:00 AM - Wake up, hydrate, stretch\n");
            printf("7:15 AM - Morning routine and breakfast\n");
            printf("7:45 AM - Plan your day\n\n");
            printf("Work/Study:\n");
            printf("8:00 AM - 10:00 AM - Focused work or study\n");
            printf("10:00 AM - Quick break\n");
            printf("10:15 AM - 12:00 PM - Continue work/study\n\n");
            printf("12:00 PM - 1:00 PM - Lunch and relax\n\n");
            printf("Afternoon:\n");
            printf("1:00 PM - 3:00 PM - More work/study\n");
            printf("3:00 PM - Short break, stretch or walk\n\n");
            printf("Evening:\n");
            printf("3:30 PM - 5:30 PM - Finish up work/study\n");
            printf("5:30 PM - Exercise or hobbies\n\n");
            printf("Night:\n");
            printf("7:00 PM - Dinner\n");
            printf("8:00 PM - 9:30 PM - Leisure time (reading, TV, etc.)\n");
            printf("10:00 PM - Wind down and sleep\n");
            break;

        case 7:
            printf("Sunday Routine:\n\n");
            printf("Chill and relax!\n");
            break;

        default:
            printf("Invalid input. Please enter a number between 1-7.\n");
            break;
    }
    }
    return 0;
}
