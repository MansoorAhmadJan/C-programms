
#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    fflush(stdout);

    scanf("%d", &a);
    printf("You entered: %d\n", a);

    return 0;
}