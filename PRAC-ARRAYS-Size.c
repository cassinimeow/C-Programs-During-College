#include <stdio.h>

int main() {

    int numArray[][4] = {
        {1, 2, 3, 4},
        {10, 20, 30, 40},
        {100, 200, 300, 400}
    };

    printf("Total size of array in bytes: %d\n", sizeof(numArray));
    printf("Length of row: %d\n", ( sizeof(numArray) / sizeof(numArray[0])) );
    printf("Length of col: %d\n", ( sizeof(numArray[0]) / sizeof(numArray[0][0])) );

    printf("\nHow did it get the row length?\n");
    printf("bytes size of whole array (%d) / bytes size of first row (%d) = %d", sizeof(numArray), sizeof(numArray[0]), ( sizeof(numArray) / sizeof(numArray[0])));
    printf("\nWherein: each element has 4 bytes beacuse it is an INT");

    printf("\n\nHow did it get the the column length?\n");
    printf("bytes size of first row (%d) / bytes size of first column of first row (%d) = %d\n", sizeof(numArray[0]), sizeof(numArray[0][0]), ( sizeof(numArray[0]) / sizeof(numArray[0][0]) ));

    printf("\nWhy do have to make this thing complicated?\nBecause the devs were crazy!");
    printf("\n\nBa't di na lang rekta kunin yung length ng element?\nBa't need pa kunin yung byte sizes at i-divide sa bytes of a single element?");

    return 0;
}
