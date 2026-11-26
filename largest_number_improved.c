#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c;

    printf("Enter three numbers:\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3 ||
        !isfinite(a) || !isfinite(b) || !isfinite(c)) {
        fprintf(stderr, "Error: enter three finite numbers.\n");
        return EXIT_FAILURE;
    }

    float max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Largest value: %g (", max);
    const char *separator = "";
    if (a == max) {
        printf("a");
        separator = ", ";
    }
    if (b == max) {
        printf("%sb", separator);
        separator = ", ";
    }
    if (c == max) {
        printf("%sc", separator);
    }
    puts(")");

    return EXIT_SUCCESS;
}
