#include <stdio.h>

int main() {
    float students[20], sum, average;

    for (int i = 0; i < 20; i++) {
        printf("Enter marks for student #%d: ", i + 1);
        scanf("%f", &students[i]);
    }

    for (int i = 0; i < 20; i++) {
        sum += students[i];
    }
    
    average = sum / (sizeof(students) / sizeof(students[0]));
    
    printf("\nAverage marks of all students: %.2f", average);

    printf("\nPROGRAMMER'S NAME: TOGONON, AMVER JOHN CALEB DS. \n");

    return 0;
}