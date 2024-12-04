#include <stdio.h>

int main() {
    int i;

    printf("\n(For Loop)\n");
    for (i = 1; i <= 10; i++) {
        printf("(%d) Ricky Cuenza\n", i);
    }

    printf("\n(While Loop)\n");
    i = 1;
    while (i <= 10) {
        printf("(%d) Ricky Cuenza\n", i);
        i++;
    }

    printf("\n(Do-While Loop)\n");
    i = 1;
    do {
        printf("(%d) Ricky Cuenza\n", i);
        i++;
    } while (i <= 10);

    return 0;
}