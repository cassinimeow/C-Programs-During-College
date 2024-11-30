#include <stdio.h>

int main() {
    int i;

    printf("\n(FOR LOOP)\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    

    printf("\n\n(WHILE LOOP)\n");
    i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    printf("\n\n(DO-WHILE LOOP)\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    printf("\nProgrammer's Name: Elizander Aguila\n");
    return 0;
}