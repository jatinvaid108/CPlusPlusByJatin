#include <stdio.h>
int main() {
    // Program: Display the AP 1,3,5,7,9
    printf("==== Program: Display the AP 1,3,5,7,9 ====\n");
    int n;
    printf("Enter the last number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}


#include <stdio.h>
int main() {
    // Program: Display the AP 4,7,10,13,16
    printf("==== Program: Display the AP 4,7,10,13,16 ====\n");
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    
    for (int i = 4; i <= 4 + (n - 1) * 3; i += 3) {
        printf("%d\n", i);
    }

    return 0;
}


#include <stdio.h>
int main() {
    // Program: Display the GP 5,10,45
    printf("==== Program: Display the GP 5,10,45 ====\n");
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    
    int a = 5;
    for (int i = 1; i <= n; i++) {
        printf("%d\n", a);
        a = a * 3;
    }

    return 0;
}



#include <stdio.h>
int main() {
    // Program: Find the highest common factor of a number
    printf("==== Program: Find the highest common factor of a number ====\n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}



#include <stdio.h>
int main() {
    // Program: Check if a number is prime or composite
    printf("==== Program: Check if a number is prime or composite ====\n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int flag = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    
    if (n == 1) {
        printf("Neither prime nor composite\n");
    } else if (flag == 1) {
        printf("Prime\n");
    } else {
        printf("Composite Number\n");
    }

    return 0;
}
