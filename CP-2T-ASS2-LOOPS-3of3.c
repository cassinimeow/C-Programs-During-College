#include <stdio.h>

int main() {
    int i;

    printf("\n(FOR LOOP)\n");
    printf("----------------------------------------");
    printf("\nNumber\t|\tSquared of a number");
    printf("\n----------------------------------------\n");
    for (i = 1; i <= 8; i++) {
        printf("%d\t|\t%d\n", i,(i*i));
    }
    printf("\n----------------------------------------");
    

    printf("\n\n(WHILE LOOP)\n");
    printf("----------------------------------------");
    printf("\nNumber\t|\tSquared of a number");
    printf("\n----------------------------------------\n");
    i = 1;
    while (i <= 8) {
        printf("%d\t|\t%d\n", i,(i*i));
        i++;
    }
    printf("\n----------------------------------------");

    printf("\n\n(DO-WHILE LOOP)\n");
    printf("----------------------------------------");
    printf("\nNumber\t|\tSquared of a number");
    printf("\n----------------------------------------\n");
    i = 1;
    do {
        printf("%d\t|\t%d\n", i,(i*i));
        i++;
    } while (i <= 8);
    printf("\n----------------------------------------");

    printf("\n\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n");
    return 0;
}