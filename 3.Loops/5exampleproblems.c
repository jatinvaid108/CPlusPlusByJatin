#include <stdio.h>
int main() {
    // Program: Counting the digits of a given number
    printf("==== Program: Counting the digits of a given number ====\n");

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int count = 0;

    if (n == 0) {   // Check if the number is zero
        count = 1;  // If it is, there is one digit
    }

    while (n > 0) {
        n = n / 10;   // Remove the last digit
        count = count + 1;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
//  ******************************************************************

#include <stdio.h>
int main() {
    // Program: Calculating the sum of digits of a given number
    printf("==== Program: Calculating the sum of digits of a given number ====\n");

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;

    while (n > 0) {
        int last_digit = n % 10;   // Get the last digit
        n = n / 10;                // Remove the last digit
        sum = sum + last_digit;    // Add the last digit to sum
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


//  ******************************************************************


#include <stdio.h>
int main() {
    // Program: Calculating the sum of even digits of a given number
    printf("==== Program: Calculating the sum of even digits of a given number ====\n");

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    int isValid = 1;  // Flag to check if the number is valid

    while (n > 0) {
        int last_digit = n % 10;   // Get the last digit

        if (last_digit % 2 == 0) { // Check if the last digit is even
            sum = sum + last_digit; // Add the even digit to sum
        } else {
            isValid = 0; // Set flag to indicate number is not valid
            break;       // Break loop if an odd digit is encountered
        }

        n = n / 10; // Remove the last digit
    }

    if (isValid) {
        printf("Sum of even digits: %d\n", sum);
    } else {
        printf("Invalid\n");
    }

    return 0;
}
