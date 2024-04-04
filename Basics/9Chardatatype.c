//char is a type of data type which can stores all the values of like that is written in our keyboard even number special Characters etc.
#include <stdio.h>

int main() {
    char x;
    printf("Enter the char value you would like to store: ");
    scanf("%c", &x);  // Taking input of a character
    printf("%c\n", x);  // Printing the character
    return 0;
}


// ASCII VALUES
// Each and every Character has ASCII Value associated with it 
// BElow is the example given :-
// To print ascii value of any character (Typecasting)

#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);  // Taking input of a character
    printf("%d\n", (int)x);  // Printing the ASCII value of the character using typecasting
    return 0;
}


#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);  // Taking input of an integer
    char ch = (char)x;  // Typecasting integer to char
    printf("%c\n", ch);  // Printing the character
    return 0;
}
// ABove program is telling us about ascii value of integers . Firstly Converting integer to char  
