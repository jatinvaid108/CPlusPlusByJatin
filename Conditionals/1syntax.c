#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);  // Taking input of an integer
    if (n % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd wow");
    }
    return 0;
}
// Syntax 2  below !! 
// summary:- if(Condition) print statement

#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);  // Taking input of an integer
    if (n % 2 == 0) {
        printf("Even Number !!");
    } else {
        printf("Odd Number !!");
        printf(" Woow !!");
    }
    return 0;
}
//  Print the Absolute Number of an Integer . MEans even if there is a negative number print it as positive 


#include <stdio.h>

int main() {
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);  // Taking input of an integer
    if (x >= 0) {
        printf("%d", x);
    } else {
        printf("%d", -x);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);  // Taking input of an integer
    if (n < 0) {
        printf("%d", n);
    } else {
        printf("%d", n);
    }
    return 0;
}
