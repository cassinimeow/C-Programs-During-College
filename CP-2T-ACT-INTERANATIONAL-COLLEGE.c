#include <stdio.h>

int studentNo = 0, studentsPassed = 0, studentsFailed = 0, studentsProcessed = 0;
char studentName[50], subject[50], userResponse;
float midterm, final, average, finalGrade;

void header() {
    printf("\nXYZ International College\n");
    printf("\tMakati City\n");
    
}

void getStudentDetails() {
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
}

void getRemark() {
    if (average <= 3.0) {
        printf("\n\t\tRemark: Passed");
        studentsPassed++;
    } else if (average > 3.0) {
        printf("\n\t\tRemark: Failed");
        studentsFailed++;
    }
}

int main() {

    header();

    while (1) {
        getStudentDetails();

        printf("\n\t\tStudent Number: %d", studentNo);
        printf("\n\t\tStudent Name: %s", studentName);
        printf("\t\tSubject: %s", subject);

        average = (midterm + final) / 2;
        printf("\t\tAverage Grade: %.2f", average);

        getRemark();

        printf("\n\n\t\tProcess Another? Y/N: ");
        scanf(" %c", &userResponse);
        if (userResponse == 'N' || userResponse == 'n') break;
    }
    
    printf("\n\t\tTotal No. of students passed: %d\n", studentsPassed);
    printf("\t\tTotal No. of students failed: %d\n", studentsFailed);
    printf("\t\tTotal No. of students processed: %d\n", studentsProcessed);
    printf("\nPROGRAMMER'S NAME: CUENZA, RICKY S.\n\n");

    return 0;
}