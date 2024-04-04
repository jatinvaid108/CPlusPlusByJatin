#include <stdio.h>

int main() {
    int x;
    printf("enter the number : ");
    scanf("%d", &x);
    printf("%d\n", x*x);
    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2;
    printf("Let's print sum of a number \n 4"); // << opertor is called Insertion operator
    printf("Enter the first NUmber \n");
    scanf("%d", &num1); // >> is called Extraction Operator
    printf("Enter the Second NUmber :- \n");
    scanf("%d", &num2);
    printf("The sum is %d\n", num1 + num2);
    return 0;
}
