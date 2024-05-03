#include <stdio.h>

int main() {
    // Program: Print a message multiple times
    printf("==== Program: Print a message multiple times ====\n");
    int n;
    printf("Enter your desired number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf(" Jai Shree Ram\n");
        printf(" Hare Krishna\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Program: Print numbers from 6 to n
    printf("==== Program: Print numbers from 6 to n ====\n");
    int n;
    printf("Enter your desired number: ");
    scanf("%d", &n);
    
    for (int i = 6; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Program: Print even numbers up to 100
    printf("==== Program: Print even numbers up to 100 ====\n");
    
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Program: Print even numbers up to n using less space and time
    printf("==== Program: Print even numbers up to n using less space and time ====\n");
    int n;
    printf("Enter num: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    // Program: Print odd numbers up to n
    printf("==== Program: Print odd numbers up to n ====\n");
    int n;
    printf("Enter num: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
