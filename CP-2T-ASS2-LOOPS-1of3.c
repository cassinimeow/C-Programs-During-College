#include <stdio.h>

int main() {

    int loop, sum = 0, i;

    printf("\n-----------------------------------------------\n");
    printf("                SUM CALCULATOR                 \n");
    printf("-----------------------------------------------\n");

    printf("\n(FOR LOOP)");
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    for (i = 1; i <= loop; i++) {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    printf("\n-----------------------------------------------\n");
    printf("                WHILE LOOP                     \n");
    printf("-----------------------------------------------\n");

    sum = 0;
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    i = 1;
    while (i <= loop) {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);

    printf("\n-----------------------------------------------\n");
    printf("                DO-WHILE LOOP                  \n");
    printf("-----------------------------------------------\n");

    sum = 0;
    printf("\nEnter a number (n): ");
    scanf("%d", &loop);
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= loop);
    printf("Sum: %d\n", sum);

    printf("\n-----------------------------------------------\n");
    printf("                PROGRAMMER'S INFO              \n");
    printf("-----------------------------------------------\n");

    printf("\nProgrammer's Name: Elizander Aguila\n");
    printf("Date: 2023-02-20\n");
    printf("Version: 1.0\n");

    printf("\n-----------------------------------------------\n");
    printf("                END OF PROGRAM                 \n");
    printf("-----------------------------------------------\n");

    return 0;
}