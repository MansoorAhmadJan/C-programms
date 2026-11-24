#include <stdio.h>
#include <stddef.h>

/* Return the index of the first match, or length if no match exists. */
size_t linear_search(const int values[], size_t length, int target) {
    for (size_t i = 0; i < length; ++i) {
        if (values[i] == target) {
            return i;
        }
    }
    return length;
}

int main(void) {
    const int values[] = {12, 7, 25, 7, 31};
    const int targets[] = {7, 31, 99};
    const size_t length = sizeof values / sizeof values[0];

    for (size_t i = 0; i < sizeof targets / sizeof targets[0]; ++i) {
        size_t index = linear_search(values, length, targets[i]);
        if (index == length) {
            printf("%d not found\n", targets[i]);
        } else {
            printf("%d found at index %zu\n", targets[i], index);
        }
    }
    return 0;
}
