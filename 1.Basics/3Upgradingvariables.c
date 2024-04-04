#include <stdio.h>

int main() {
    int x = 5;
    printf("%d\n", x);
    x += 2;         // or x=x+2
    printf("%d\n", x);
    x -= 3;
    printf("%d\n", x);    // Shows it picks up the latest value of x in code.
    printf("%d\n", x * 5);
    printf("%d\n", x);
    return 0;
}
