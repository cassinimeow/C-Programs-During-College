#include <stdio.h>

int main() {

    int loop, sum = 0, i;

    printf("\n(FOR LOOP)");
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    for (i = 1; i < loop; i++) {
        sum += i;
    }
    printf("Sum: %d", sum);

    printf("\n\n(WHILE LOOP)");
    sum = 0;
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    i = 1;
    while (i <= loop) {
        sum += i;
        i++;
    }
    printf("Sum: %d", sum);

    printf("\n\n(DO-WHILE LOOP)");
    sum = 0;
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= loop);
    printf("Sum: %d", sum);

    printf("\n\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n");
    return 0;
}
