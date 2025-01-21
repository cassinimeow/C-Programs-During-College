#include <stdio.h>

int main() {
    float val[8];
    float highval, lowval;

    printf("Please enter 8 numbers:\n");
    for (int i = 0; i < 8; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &val[i]);
    }

    highval = val[0];
    lowval = val[0];

    for (int i = 1; i < 8; i++) {
        if (val[i] > highval) {
            highval = val[i];
        }
        if (val[i] < lowval) {
            lowval = val[i];
        }
    }

    printf("\nThe highest value is: %.2f\n", highval);
    printf("Differences from the highest:\n");
    for (int i = 0; i < 8; i++) {
        float dif = highval - val[i];
        printf("Value %.2f -> %.2f\n", val[i], dif);
    }

    printf("\nThe lowest value is: %.2f\n", lowval);
    printf("Differences from the lowest:\n");
    for (int i = 0; i < 8; i++) {
        float dif = val[i] - lowval;
        printf("Value %.2f -> %.2f\n", val[i], dif);
    }

    return 0;
}
