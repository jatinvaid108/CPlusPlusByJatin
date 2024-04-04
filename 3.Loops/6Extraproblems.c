#include <stdio.h>

int main() {
    // Program: Counting the digits of a given number
    printf("==== Program: Counting the digits of a given number ====\n");

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int count = 0;

    if (n == 0) {
        count = 1;
    }

    while (n > 0) {
        n = n / 10;
        count = count + 1;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

//  ******************************************************************

#include <stdio.h>
int main() {
    // Program: Sum of even numbers up to n
    printf("==== Program: Sum of even numbers up to n ====\n");

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;

    while (i <= n) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i = i + 1;
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}

//  ******************************************************************
#include <stdio.h>
int main() {
    // Program: Reversing a number
    printf("==== Program: Reversing a number ====\n");

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int last_digit, reversed = 0;

    while (num != 0) {
        last_digit = num % 10;
        reversed = reversed * 10;
        reversed = reversed + last_digit;
        num = num / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
