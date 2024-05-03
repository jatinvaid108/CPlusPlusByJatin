#include <stdio.h>
#include <math.h>

int main() {
    // printf("%lf\n", sqrt(3));
    // printf("%lf\n", cbrt(8));
    printf("%d\n", fmax(4, 8)); // fmin and fmax don't need <math.h> header file
    printf("%d\n", fmin(4, 8));
    printf("%lf\n", pow(2, 2));

    return 0;
}
