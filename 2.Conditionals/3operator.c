#include <stdio.h>

int main() {
    // Program 1: Check if a number is divisible by both 5 and 3
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 3 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    printf("\n");
    return 0;
}

// Program 2: Check if a number is divisible by either 5 or 3
#include <stdio.h>
int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if (num % 5 == 0 || num % 3 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    printf("\n");
    
    return 0;
}


