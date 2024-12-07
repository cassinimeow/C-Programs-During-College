#include <stdio.h>

/**
 * @brief A function that returns a monotonically increasing integer.
 *
 * Every time counter() is called, it returns the value of a static
 * variable that is incremented on each call. The value is initialized
 * to 0 on the first call.
 *
 * @return A monotonically increasing integer.
 */
int counter() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    printf("%d ", counter());
    printf("%d ", counter());
    return 0;
}