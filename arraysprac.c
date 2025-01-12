#include <stdio.h>

/*int main() {
    int values[8];
    int differences[8];
    int indices[8];
    int i, maxIndex, maxValue;

    // Get input values from user
    printf("Enter eight values: \n");
    for (i = 0; i < 8; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
        indices[i] = i; // store the original index
    }

    // Find the maximum value and its index
    maxValue = values[0];
    maxIndex = 0;
    for (i = 1; i < 8; i++) {
        if (values[i] > maxValue) {
            maxValue = values[i];
            maxIndex = i;
        }
    }

    // Calculate differences from highest value
    for (i = 0; i < 8; i++) {
        differences[i] = maxValue - values[i];
    }

    // Sort differences and indices in descending order
    for (i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (differences[i] < differences[j]) {
                int tempDiff = differences[i];
                differences[i] = differences[j];
                differences[j] = tempDiff;

                int tempIndex = indices[i];
                indices[i] = indices[j];
                indices[j] = tempIndex;
            }
        }
    }

    // Display the sorted differences and original values
    printf("\nHighest value: %d\n", maxValue);
    printf("Differences from highest to lowest:\n");
    for (i = 0; i < 8; i++) {
        printf("Value %d: %d (difference from highest: %d)\n", indices[i] + 1, values[indices[i]], differences[i]);
    }

    return 0;
}*/

int main() {
    int results[8];
    int x;

    // Calculate the results of the equation and store them in the array
    for (x = 1; x <= 8; x++) {
        results[x - 1] = x * 2;
    }

    // Display the stored values
    printf("Results of the equation x * 2:\n");
    for (x = 0; x < 8; x++) {
        printf("x = %d: %d\n", x + 1, results[x]);
    }

    return 0;
}
