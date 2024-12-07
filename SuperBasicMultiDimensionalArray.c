#include <stdio.h>

int main() {
    int number[][4] = {
        {1, 2, 3, 4},
        {10, 20, 30, 40},
    };

    printf("%i\n", number[1][2]);

    return 0;
}