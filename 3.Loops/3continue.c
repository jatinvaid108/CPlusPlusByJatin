#include <stdio.h>

int main() {
    // Program: Printing numbers from 1 to 20, skipping 3 and 7
    printf("==== Program: Printing numbers from 1 to 20, skipping 3 and 7 ====\n");
    
    for (int i = 1; i <= 20; i++) {
        // Skip printing if i is equal to 3 or 7
        if (i == 3 || i == 7) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
