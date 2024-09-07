#include <stdio.h>

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}

//leap year
#include <stdio.h>
int main(){
   int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
}

//Vowels or Consonents
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u') printf("Vowels \n");
    else printf("Consonents");
}

//Notes Demonstration
/**
 * C program to count minimum number of notes in an amount
 */
 
#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500){
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100){
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50){
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20){
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10){
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5){
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2){
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1){
        note1 = amount;
    }

    /* Print required notes */
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}

//Quadrant Question