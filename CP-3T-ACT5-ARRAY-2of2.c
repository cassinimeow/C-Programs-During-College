#include <stdio.h>

int main() {

    int numArray[8];
    int calculatedArray[8];
    printf("\nEnter an integer: ");
    scanf("%d", &numArray[0]);
    calculatedArray[0] = (numArray[0] * 1) - 1; // this is my simple equation
    for (int i = 1; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("Enter another integer: ");
        scanf("%d", &numArray[i]);
        calculatedArray[i] = (numArray[i] * i) - i;
    }

    printf("\nThis is the array where the values are calculated with simple equation in order: \n");
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("(%d * %d) - %d = %d\n", numArray[i], i+1, i+1, calculatedArray[i]);
    }

    printf("\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n\n");
    return 0;
}