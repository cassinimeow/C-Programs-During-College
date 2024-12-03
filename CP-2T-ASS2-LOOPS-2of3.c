#include <stdio.h>

int main() {
    int i;

    printf("\n****************************************************\n");
    printf("                FOR LOOP RESULTS                  \n");
    printf("****************************************************\n");

    printf("\nPrinting numbers from 1 to 10 using For Loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\t\n", i);
    }

    printf("\n****************************************************\n");
    printf("                WHILE LOOP RESULTS                \n");
    printf("****************************************************\n");

    printf("\nPrinting numbers from 1 to 10 using While Loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d\t\n", i);
        i++;
    }

    printf("\n****************************************************\n");
    printf("                DO-WHILE LOOP RESULTS             \n");
    printf("****************************************************\n");

    printf("\nPrinting numbers from 1 to 10 using Do-While Loop:\n");
    i = 1;
    do {
        printf("%d\t\n", i);
        i++;
    } while (i <= 10);

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