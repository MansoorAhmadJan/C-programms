#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    reverse = (num % 10) * 100;
    num = num / 10;

    reverse = reverse + (num % 10) * 10;
    num = num / 10;

    reverse = reverse + num;

    printf("Reversed number = %d\n", reverse);

    return 0;
}