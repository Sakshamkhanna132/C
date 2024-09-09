#include <stdio.h>

/*
In this program we will find out the area and perimeter of the rectangle and compare it.
For this we will take length and breadth from the user 
Then we will calculate the area and perimeter.
Then we will display the results.
*/

int main(){
    float length, breadth;
    float perimeter, area;

    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);
    printf("length is %.3f\nBreadth is %f\n", length, breadth);

    area = length * breadth;
    perimeter=2 * (length + breadth);

    printf("Area is %.3f\n", area);
    printf("Perimeter is %.3f\n", perimeter);
    return 0;

}