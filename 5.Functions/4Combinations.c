#include <stdio.h>
int main() {
    int n, r;
    long long a = 1, b = 1, c = 1;

    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter r:\n");
    scanf("%d", &r);

    for(int i = 1; i <= n; i++) {
        a *= i;
    }
    for(int j = 1; j <= r; j++) {
        b *= j;
    }
    for(int k = 1; k <= n - r; k++) {
        c *= k;
    }

    printf("No. of Possible Combinations: %lld\n", a / (b * c));

    return 0;
}

// HERE COMES FUNCTIONS WE WILL MAKE UPPER CODE LOOK SMALL BY USING FUNCTIONS .

#include <stdio.h>
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Enter r:\n");
    scanf("%d", &r);

    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);

    printf("No. of Possible Combinations: %d\n", a / (b * c));

    return 0;
}
