#include <stdio.h>

int main() {

    double mid, final, ave;
    int studentNumber;
    char studentName[50];
    char subject[50];
    char response;
    int studentProcessed = 0;

    do {
        printf("\nXYZ  International College");
        printf("\n       Makati City\n\n");

        printf("Enter student number: ");
        scanf("%d", &studentNumber);
        getchar();

        printf("Enter student name: ");
        fgets(studentName, sizeof(studentName), stdin);

        printf("Enter subject name: ");
        fgets(subject, sizeof(subject), stdin);

        printf("Enter midterm: ");
        scanf("%lf", &mid);
        getchar();

        printf("Enter final: ");
        scanf("%lf", &final);
        getchar();

        ave = (mid + final) / 2;

        if (ave <= 3.0) {
            printf("Remarks: Passed\n");
        } else {
            printf("Remarks: Failed\n");
        }

        printf("\n\nProcess Another? Y/N: ");
        scanf(" %c", &response);
        getchar();

        studentProcessed++;

    } while (response == 'Y' || response == 'y');

    printf("\nNumber of students processed: %d", studentProcessed);
    printf("\nProgrammer's Name: Elizander Aguila");

    return 0;
}