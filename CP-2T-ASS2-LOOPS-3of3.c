#include <stdio.h>

int main() {
    int i;

    printf("\n****************************************************\n");
    printf("                FOR LOOP RESULTS                  \n");
    printf("****************************************************\n");

    printf("\nNumber\t|\tSquared of a number\n");
    printf("----------------------------------------\n");
    for (i = 1; i <= 8; i++) {
        printf("%2d\t|\t%4d\n", i, (i*i));
    }
    printf("----------------------------------------\n");

    printf("\n****************************************************\n");
    printf("                WHILE LOOP RESULTS                \n");
    printf("****************************************************\n");

    printf("\nNumber\t|\tSquared of a number\n");
    printf("----------------------------------------\n");
    i = 1;
    while (i <= 8) {
        printf("%2d\t|\t%4d\n", i, (i*i));
        i++;
    }
    printf("----------------------------------------\n");

    printf("\n****************************************************\n");
    printf("                DO-WHILE LOOP RESULTS             \n");
    printf("****************************************************\n");

    printf("\nNumber\t|\tSquared of a number\n");
    printf("----------------------------------------\n");
    i = 1;
    do {
        printf("%2d\t|\t%4d\n", i, (i*i));
        i++;
    } while (i <= 8);
    printf("----------------------------------------\n");

    printf("\n****************************************************\n");
    printf("                PROGRAMMER'S INFORMATION          \n");
    printf("****************************************************\n");

    printf("\nProgrammer's Name: Elizander Aguila\n");
    printf("Date: 2023-02-20\n");
    printf("Version: 1.0\n");
    printf("Contact: elizander.aguila@email.com\n");

    printf("\n****************************************************\n");
    printf("                PROGRAM EXECUTION COMPLETE        \n");
    printf("****************************************************\n");

    return 0;
}