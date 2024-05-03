#include <stdio.h>
int main() {
    int x = 2;
    int y = 5;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

// Swap Two Numbers without Extra Variable:

#include <stdio.h>
int main() {
    int x = 6677;
    int y = 7888;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
// Swapping Using Functions ....

#include <stdio.h>
void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

