#include <stdio.h>

int main() {
    int studentNo;
    int studentsPassed;
    int studentsFailed;
    int studentsProcessed;
    char studentName[100];
    char subject[50];
    char userResponse;
    float midterm;
    float final;
    float average;
    float finalGrade;

    printf("\nXYZ International College\n");
    printf("\tMakati City\n");
    
    while (1) {
        studentsProcessed++;
        printf("\nStudent Number: ");
        scanf("%d", &studentNo);
        getchar();
        printf("Student Name: ");
        fgets(studentName, sizeof(studentName), stdin);
        printf("Subject: ");
        fgets(subject, sizeof(subject), stdin);
        printf("Midterm Grade: ");
        scanf("%f", &midterm);
        printf("Final Grade: ");
        scanf("%f", &final);
        average = (midterm + final) / 2;
        printf("Average Grade: %.2f", average);
        char remark[50];
        if (average <= 3.0) {
            printf("\nRemark: Passed");
            studentsPassed++;
        }
        else if (average > 3.0) {
            printf("\nRemark: Failed");
            studentsFailed++;
        }
        printf("\n\nProcess Another? Y/N: ");
        scanf(" %c", &userResponse);
        if (userResponse == 'N' || userResponse == 'n') break;
    }
    printf("Total No. of students passed: %d\n", studentsPassed);
    printf("Total No. of students failed: %d\n", studentsFailed);
    printf("Total No. of students processed: %d\n", studentsProcessed);
    printf("\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n");

    return 0;
}