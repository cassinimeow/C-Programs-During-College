#include <stdio.h>
#define p printf
#define s scanf

int stdno, stdpassed, stdfailed, stdprocessed;
char stdna[100], subj[50], responses;
float termmid, nalfi, ave, finale;

int main() {
    p("XYZ International College");
    p("\n\t\tMakati City");

    while (1) {
        p("\nStudent Number: ");
        s("%d", &stdno);

        getchar();
        p("Student Name: ");
        fgets(stdna, sizeof(stdna), stdin);

        p("Subject: ");
        s("%c", &subj);

        p("Midterm Grade: ");
        s("%f", &termmid);

        p("Final Grade: ");
        s("f", &nalfi);

        ave = (termmid + nalfi) / 2;
        p("\nAverage Grade: %.2f", ave);

        char remark[50];
        if (ave <= 3.0) {
            p("\n\t\tRemark: Passed");
            stdpassed++;
        } else if (ave > 3.0) {
            p("\n\t\tRemark: Failed");
            stdfailed++;
        }

        p("\n\t\tProcess Another? Y\n: ");
        s("%c", &responses);
        {
            if (responses == 'N' || responses == 'n') break;
        }
        p("\n\t\tTotal No. of students passed: %d\n", stdpassed);
        p("\t\tTotal No. of students failed: %d\n", stdfailed);
        p("\t\tTotal No. of students processed: %d\n", stdprocessed);

        p("\nProgrammer's Name: Nick Justin Robles ");
    }

    return 0;
}