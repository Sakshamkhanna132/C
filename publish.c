#include <stdio.h>

int main() {
    int intvalue = 8;
    float floatvalue = 3.14;
    double doublevalue = 4.53233;
    char charvalue = 'A';
    char strvalue[] = "To ki haal chaal? satstriakaal! mai hu neon man.";

    printf("Integer Value: %d\n", intvalue);
    printf("Float Value: %.2f\n", floatvalue);
    printf("Double Value: %.5f\n", doublevalue);
    printf("Character Value: %c\n", charvalue);
    printf("String Value: %s\n", strvalue);

    return 0;
}