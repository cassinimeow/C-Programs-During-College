#include <stdio.h>

int main() {
    int numbers[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int positiveCount = 0;
    int negativeCount = 0;
    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }

        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Odd numbers: %d\n", oddCount);
    printf("Even numbers: %d\n", evenCount);

    printf("PROGRAMMER'S NAME: Elizander Aguila\n");
    return 0;
}