#include <stdio.h>

int main() {
    float r = 4.3;
    // float y=3.14*r*r;
    // cout<<y;
    printf("%f\n", 3.14 * r * r);
    return 0;
}

#include <stdio.h>

int main() {
    float p = 1000;
    float r = 30;
    float t = 10;
    float SI = (p * r * t) / 100;
    printf("%f\n", SI);
    return 0;
}

#include <stdio.h>

int main() {
    float p, r, t;
    printf("Enter the Principle Amount\n");
    scanf("%f", &p);
    printf("Enter the Rate of Interest\n");
    scanf("%f", &r);
    printf("Enter the time limit \n");
    scanf("%f", &t);
    float SI = (p * r * t) / 100;
    printf("%f\n", SI);
    return 0;
}
