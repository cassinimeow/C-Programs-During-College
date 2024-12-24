#include <stdio.h>
#define p printf
#define s scanf

int stufail, nostu, stuno, stupro, stupass;
char stuna[10], ans, subj, remark;
float fin, mid, ave;

int main(int argc, char *argy[]) {
    do {
        system("cls");
        hdgrtn();
        readrtn();
        testrtn();

        p("Process Another? Y/N:");
        s("%s", &ans);
    } while ((ans == 'Y') || (ans == 'y'));

    p("Total No. of Student Passed: %d\n", stupass);
    p("Total No. of Student Failed: %d\n", stufail);
    p("Total No. of Student Processed: %d\n", stupro);
    system("pause");
}

// heading//
hdgrtn() {
    p("\n\t\tXYZ International College");
    p("\n\t\tMakati City\n\n");
}

// read//
readrtn() {
    p("Student Number    :");
    s("%d", &stuno);

    p("Student Name    :");
    s("%s", &stuna);

    p("Subject    :");
    s("%s", &subj);

    p("Midterm Grade    :");
    s("%s", &mid);

    p("Final Grade    :");
    s("%s", &fin);
}

// testrtn//
testrtn() {
    ave = (mid + fin) / 2;

    if (ave <= 3.0) {
        (remark, "Passed");
        prtrtn();
    } else if (ave > 3.0) {
        (remark, "Failed");
        prtrtn();
    } else {
        p("Invalid Grade\n");
    }
}

// print//
prtrtn() {
    p("\n\t\tStudent Number : %d", stuno);
    p("\n\t\tStudent Name : %s", stuna);
    p("\n\t\tSubject: %d", subj);
    p("\n\t\tAverage Grade : %.2f\n\n", ave);
    p("\n\t\tRemark : %s", remark);
    stuno = stuno + 1;

    p("\nProgrammer's Name: Jamaica Laigo");
}
