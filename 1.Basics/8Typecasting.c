#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);           // Taking integer input
    float y = (float)x;        // Typecasting x to float
    printf("%f\n", y / 2);     // Printing y divided by 2
    return 0;
}
