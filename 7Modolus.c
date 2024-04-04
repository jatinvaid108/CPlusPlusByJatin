#include <stdio.h>

int main() {
    int num1, num2;
    printf("First Number ");
    scanf("%d", &num1);
    printf("Second Number");
    scanf("%d", &num2);
    printf("%d\n", num1 % num2);
    return 0;
}

// a%10=l (last num) eg:- 121 % 10 = 1
// a % b = a      if a<b 
// a % A = 0
// a % (-b)== a % b ( same treat hota)
// (-a) % b =-(a % b)
