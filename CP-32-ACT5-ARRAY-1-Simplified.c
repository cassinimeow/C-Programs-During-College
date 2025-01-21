#include <stdio.h>

int main() {
    int numArray[8];

    printf("Enter the first integer: ");
    scanf("%d", &numArray[0]);
    printf("Enter the second integer: ");
    scanf("%d", &numArray[1]);
    printf("Enter the third integer: ");
    scanf("%d", &numArray[2]);
    printf("Enter the fourth integer: ");
    scanf("%d", &numArray[3]);
    printf("Enter the fifth integer: ");
    scanf("%d", &numArray[4]);
    printf("Enter the sixth integer: ");
    scanf("%d", &numArray[5]);
    printf("Enter the seventh integer: ");
    scanf("%d", &numArray[6]);
    printf("Enter the eighth integer: ");
    scanf("%d", &numArray[7]);

    printf("\nArray:\n");
    printf("%d %d %d %d %d %d %d %d\n", numArray[0], numArray[1], numArray[2],
           numArray[3], numArray[4], numArray[5], numArray[6], numArray[7]);

    int highestValue;
    highestValue = numArray[0];
    if (numArray[1] > highestValue) {
        highestValue = numArray[1];
    }
    if (numArray[2] > highestValue) {
        highestValue = numArray[2];
    }
    if (numArray[3] > highestValue) {
        highestValue = numArray[3];
    }
    if (numArray[4] > highestValue) {
        highestValue = numArray[4];
    }
    if (numArray[5] > highestValue) {
        highestValue = numArray[5];
    }
    if (numArray[6] > highestValue) {
        highestValue = numArray[6];
    }
    if (numArray[7] > highestValue) {
        highestValue = numArray[7];
    }
    printf("\nHighest Value: %d\n", highestValue);

    int lowestValue;
    lowestValue = numArray[0];
    if (numArray[1] < lowestValue) {
        lowestValue = numArray[1];
    }
    if (numArray[2] < lowestValue) {
        lowestValue = numArray[2];
    }
    if (numArray[3] < lowestValue) {
        lowestValue = numArray[3];
    }
    if (numArray[4] < lowestValue) {
        lowestValue = numArray[4];
    }
    if (numArray[5] < lowestValue) {
        lowestValue = numArray[5];
    }
    if (numArray[6] < lowestValue) {
        lowestValue = numArray[6];
    }
    if (numArray[7] < lowestValue) {
        lowestValue = numArray[7];
    }
    printf("\nLowest Value: %d\n", lowestValue);

    printf("\nDifferences from Highest Value:\n");
    printf("%d\n", highestValue - numArray[0]);
    printf("%d\n", highestValue - numArray[1]);
    printf("%d\n", highestValue - numArray[2]);
    printf("%d\n", highestValue - numArray[3]);
    printf("%d\n", highestValue - numArray[4]);
    printf("%d\n", highestValue - numArray[5]);
    printf("%d\n", highestValue - numArray[6]);
    printf("%d\n", highestValue - numArray[7]);

    printf("\nDifferences from Lowest Value:\n");
    printf("%d\n", numArray[0] - lowestValue);
    printf("%d\n", numArray[1] - lowestValue);
    printf("%d\n", numArray[2] - lowestValue);
    printf("%d\n", numArray[3] - lowestValue);
    printf("%d\n", numArray[4] - lowestValue);
    printf("%d\n", numArray[5] - lowestValue);
    printf("%d\n", numArray[6] - lowestValue);
    printf("%d\n", numArray[7] - lowestValue);

    printf("\nPROGRAMMER'S NAME: TOGONON, AMVER\n");

    return 0;
}
