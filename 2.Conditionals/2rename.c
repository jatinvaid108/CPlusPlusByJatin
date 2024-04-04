#include <stdio.h>

int main() {
    // Program 1: Check if a person is eligible to vote
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible to vote\n");
    } else {
        printf("Not Eligible\n");
    }

    // Program 2: Check if a number is positive or negative
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("Positive Wow!!\n");
    } else {
        printf("Negative\n");
    }

    // Program 3: Check if a number is even or odd
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Congo Even Number !!\n");
    } else {
        printf("Bad!! Negative Number\n");
    }

    // Program 4: Check if a year is a leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    // Program 5: Check if a year is a leap year (alternative)
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("Yeah! it's a leap year\n");
    } else {
        printf("Not a Leap year\n");
    }

    // Program 6: Calculate Profit or Loss
    int cp, sp;
    printf("Enter the Cost price: ");
    scanf("%d", &cp);
    printf("Enter the Selling Price: ");
    scanf("%d", &sp);
    if (sp > cp) {
        printf("%d\n", sp - cp);
        printf("Profit Booked\n");
    } else if (sp < cp) {
        printf("%d\n", cp - sp);
        printf("Incurred loss\n");
    } else if (sp == cp) {
        printf("No loss or Profit\n");
    }

    // Program 7: Compare area and perimeter of a rectangle
    int length, breadth;
    double area, perimeter;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the Breadth: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter) {
        printf("Yes\n");
        printf("AREA: %f\n", area);
    } else {
        printf("No\n");
        printf("PERIMETER: %f\n", perimeter);
    }

    return 0;
}
