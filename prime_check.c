#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>

int main(void) {
    char input[128], *end;
    printf("Enter an integer: ");
    if (!fgets(input, sizeof input, stdin)) return 1;

    errno = 0;
    long value = strtol(input, &end, 10);
    if (end == input || errno == ERANGE || value < INT_MIN || value > INT_MAX) {
        fprintf(stderr, "Invalid integer.\n");
        return 1;
    }
    while (isspace((unsigned char)*end)) ++end;
    if (*end != '\0') return 1;

    int n = (int)value;
    int is_prime = n >= 2;
    for (int divisor = 2; is_prime && divisor <= n / divisor; ++divisor) {
        if (n % divisor == 0) is_prime = 0;
    }
    printf("%d is %sprime.\n", n, is_prime ? "" : "not ");
    return 0;
}
