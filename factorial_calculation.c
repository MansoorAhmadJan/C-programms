#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

int main(void) {
    char input[128], *end;
    printf("Enter an integer from 0 to 20: ");
    if (!fgets(input, sizeof input, stdin)) return 1;

    errno = 0;
    long n = strtol(input, &end, 10);
    if (end == input || errno == ERANGE || n < 0 || n > 20) {
        fprintf(stderr, "Input must be between 0 and 20.\n");
        return 1;
    }
    while (isspace((unsigned char)*end)) ++end;
    if (*end != '\0') return 1;

    unsigned long long factorial = 1;
    for (long i = 2; i <= n; ++i) {
        factorial *= (unsigned long long)i;
    }
    printf("%ld! = %llu\n", n, factorial);
    return 0;
}
