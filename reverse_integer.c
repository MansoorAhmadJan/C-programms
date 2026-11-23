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

    long long remaining = value;
    long long reversed = 0;
    do {
        reversed = reversed * 10 + remaining % 10;
        remaining /= 10;
    } while (remaining != 0);

    printf("Reversed: %lld\n", reversed);
    return 0;
}
