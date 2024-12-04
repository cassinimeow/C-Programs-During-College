#include <stdio.h>

int main() {
    int i;

    // For Loop
    printf("\nFor Loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d. Elizander Aguila\n", i);
    }  

    // While Loop
    printf("\nWhile Loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d. Elizander Aguila\n", i);
        i++;
    }

    // Do-While Loop
    printf("\nDo-While Loop:\n");
    i = 1;
    do {
        printf("%d. Elizander Aguila\n", i);
        i++;
    } while (i <= 10);

    return 0;
}