#include <stdio.h>

int main() {
    int number[][5] = {
        {100, 200, 300, 400, 500},
        {10000, 20000, 30000, 40000, 50000},
        {1234, 5678, 9876, 5432, 1012}
    };

    printf("\n");

    // A - HARD CODED = LESS FLEXIBLE = MORE PRONE TO ERROR... i guess
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    printf("\nSize (number of rows) of variable \"number\": %ld\n", sizeof(number) / sizeof(number[0]));
    printf("Size (number of columns) of each row of that variable: %ld\n", sizeof(number[0]) / sizeof(number[0][0]));

    // B - MY ATTEMPT FOR EFFICIENT CODE <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    printf("\n((My attempt >> Now 2nd attempt code))\n");
    for (int i = 0; i < ( sizeof(number) / sizeof(number[0]) ); i++) {
        for (int j = 0; j < ( sizeof(number[0]) / sizeof(number[0][0]) ); j++ ) {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    // C - SIGMA AI's CODE
    printf("\n((The SIGMA AI'S Efficient code))\n");
    int rows = sizeof(number) / sizeof(number[0]);          // Dynamically get the number of rows
    int cols = sizeof(number[0]) / sizeof(number[0][0]);    // Dynamically get the number of columns

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}