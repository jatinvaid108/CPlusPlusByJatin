// Write a program to check weather the triangle is valid or not 
#include <stdio.h>

int main() {
    printf("==== Program 1: Check if three sides form a valid triangle ====\n");
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    
    if (a + b > c && b + c > a && c + a > b) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }
    printf("\n");

    return 0;
}


// Program: Find the largest of 4 numbers

#include <stdio.h>

int main() {
    printf("==== Program: Find the largest of 4 numbers ====\n");
    int a, b, c, d;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }
    printf("The largest Number is %d\n", largest);
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    // Program: Check if a character is lowercase, uppercase, or numeric
    printf("==== Program: Check if a character is lowercase, uppercase, or numeric ====\n");
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Numeric\n");
    } else {
        printf("Character does not belong to any specified range.\n");
    }
    printf("\n");

    return 0;
}



