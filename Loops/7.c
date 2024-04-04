//  ******************************************************************

#include <stdio.h>
int main() {
    // Program: Sum of number and its reverse
    printf("==== Program: Sum of number and its reverse ====\n");

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int last_digit, reversed = 0;
    int original_num = num;

    while (num != 0) {
        last_digit = num % 10;
        reversed = reversed * 10;
        reversed = reversed + last_digit;
        num = num / 10;
    }

    int sum = original_num + reversed;
    printf("Sum of number and its reverse: %d\n", sum);

    return 0;
}
//  ******************************************************************

#include <stdio.h>
int main() {
    // Program: Factorial using for loop
    printf("==== Program: Factorial using for loop ====\n");

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int product = 1;
    for (int i = 1; i <= num; i++) {
        product *= i;
    }

    printf("Factorial of %d: %d\n", num, product);

    return 0;
}
//  ******************************************************************
#include <stdio.h>
int main() {
    // Program: Printing factorial in each step
    printf("==== Program: Printing factorial in each step ====\n");

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int product = 1;
    for (int i = 1; i <= num; i++) {
        product *= i;
        printf("Factorial at step %d: %d\n", i, product);
    }

    return 0;
}
