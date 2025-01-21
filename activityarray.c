#include <stdio.h>

int main() {
    int students [20];
    float sum, average;

    for(int i = 0; i < 20; i++) {
        printf("Enter Student Grade #%d: ", i+1);
        scanf("%d", &students[i]);
    }

    for(int i = 0; i < 20; i++) {
        sum += students[i];
    }

    average = sum / sizeof(students) / sizeof(students[0]);
    printf("\nAverage: %.2f\n", average);

    printf("\n\nPROGRAMMER'S NAME: Elizander Aguila\n\n");
    return 0;
}