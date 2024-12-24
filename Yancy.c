#include <stdio.h>
#include <stdlib.h>

int stno, nopassed = 0, nofailed = 0, noproc = 0;
char stna[20], sub, ans;
float ave, mid, fin;

int main() {
    do {
        printf("\n\t\tXYZ International College");
        printf("\n\t\tMakati, City\n\n");

        printf("\nStudent Number: ");
        scanf("%d", &stno);

        printf("\nStudent Name: ");
        scanf("%s", stna);

        getchar();
        printf("\nSubject: ");
        scanf(" c", &sub);

        printf("\nMidterm Grade: ");
        scanf("%f", &mid);

        printf("\nFinal Grade: ");
        scanf("%f", &fin);

        ave = (mid + fin) / 2;

        printf("\n\t\tStudent Number:  %d\n", stno);
        printf("\n\t\tStudent Name:  %s\n", stna);
        printf("\n\t\tSubject:  %c\n", sub);
        printf("\n\t\tAverage Grade:  %.2f\n", ave);

        if (ave <= 3.0) {
            printf("\n\t\tRemark: Passed\n\n");
            nopassed++;
        } else {
            printf("\n\t\tRemark: Failed\n\n");
            nofailed++;
        }

        printf("PROCESS ANOTHER? Y/N: ");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');

    printf("Total No. of Students Passed: %d", nopassed);
    printf("Total No. of Students Failed: %d", nofailed);
    printf("Total No. of Students Processed: %d", noproc);

    printf("\n Programmer's Name: Handang, Yancey Nicole M.");
    return 0;
}
