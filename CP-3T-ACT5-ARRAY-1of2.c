#include <stdio.h>

int main() {

    int numArray[8];
    printf("\nEnter an integer: ");
    scanf("%d", &numArray[0]);
    for (int i = 1; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("Enter another integer: ");
        scanf("%d", &numArray[i]);
    }

    printf("\nThis is the array in order: ");
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("%d ", numArray[i]);
    }

    int highestValue, lowestValue;
    highestValue = lowestValue = numArray[0];
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        if (numArray[i] > highestValue) highestValue = numArray[i];
        if (numArray[i] < lowestValue) lowestValue = numArray[i];
    }
    printf("\n\nThe highest value in the array is: %d\n", highestValue);

    printf("\nThe Difference of each value in the array from the highest value:\n");
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("%d - %d = %d\n", highestValue, numArray[i], (highestValue - numArray[i]));
    }

    printf("\nThe lowest value in the array is: %d\n", lowestValue);

    printf("\nThe Difference of each value in the array from the lowest value:\n");
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        printf("%d - %d = %d\n", numArray[i], lowestValue, (numArray[i] - lowestValue));
    }

    printf("\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n");
    return 0;
}