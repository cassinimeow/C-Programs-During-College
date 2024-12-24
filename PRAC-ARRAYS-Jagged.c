#include <stdio.h>

int main() {
    int row0[4] = {1, 2, 3, 4};
    int row1[2] = {5, 6};

    int *jagged[] = {row0, row1};

    int size[2] = {4, 2}, k = 0;

    for (int i = 0; i < 2; i++) {
        int* ptr  = jagged[i];

        for (int j = 0; j < size[k]; j++) {
            printf("%d ", *ptr);

            ptr++;
        }
        printf("\n");
        k++;
        jagged[i]++;
    }

    return 0;
}