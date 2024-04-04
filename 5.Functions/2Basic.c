// #include <stdio.h>
// void sum(int a, int b) {
//     printf("%d\n", a + b);
// }

// int main() {
//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     sum(a, b);

//     return 0;
// }

//********************************************************

#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("%d\n", sum(a, b));

    return 0;
}
