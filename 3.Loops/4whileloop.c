#include <stdio.h>
int main() {
    // Program: Printing numbers from 1 to 10 using a while loop
    printf("==== Program: Printing numbers from 1 to 10 using a while loop ====\n");

    int n = 1;
    while (n <= 10) {
        printf("%d\n", n);
        n++;
    }

    return 0;
}

//  ******************************************************************
#include <stdio.h>
int main() {
    // Program: Printing numbers from 1 to a user-specified number using a while loop
    printf("==== Program: Printing numbers from 1 to a user-specified number using a while loop ====\n");

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int i = 1;
    while (i <= num) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
