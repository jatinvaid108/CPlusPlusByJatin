#include <stdio.h>
void greet() {
    printf("Good Morning\n");
    printf("How are you?\n");
}

int main() {
    greet();
    printf("Hey\n");
    greet();

    return 0;
}

// ************************************************************
#include <stdio.h>
void usa() {
    printf("Good Morning\n");
    return;   // return will close the function
    printf("USA\n");
}

void bharat() {
    printf("Namaskar Bharat\n");
    printf("Jai Hind\n");
    return;
}

int main() {
    printf("Hey Everyone! Kya Haal Chal\n");
    usa();
    bharat();

    return 0;
}
// ************************************************************

#include <stdio.h>
void usa() {
    printf("Good Morning!! You are in USA\n");
    return;   // return will close the function
    printf("USA\n");
}

void bharat() {
    printf("Namaskar Bharat\n");
    printf("Jai Hind\n");
    usa();  // Calling usa function in bharat function only
    return;
}

int main() {
    printf("You are in main\n");
    bharat();

    return 0;
}
