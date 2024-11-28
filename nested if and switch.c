#include <stdio.h>

int main() {
    int pno, ccode;
    double hf, df, tb;
    char pname[50];

    printf("\n\t\tMakati Medical Center \n\t\t    Makati City\n");
    printf("\t\t   Hospital Bill\n\n");

    // Input patient details
    printf("Patient No: ");
    scanf("%d", &pno);
    getchar(); // Clear input buffer

    printf("Patient Name: ");
    fgets(pname, sizeof(pname), stdin);

    printf("Class Code (1: Ward, 2: Semi Private, 3: Private): ");
    scanf("%d", &ccode);

    // Classification code handling
    switch (ccode) {
        case 1:
            printf("Classification Code: Ward\n");
            break;
        case 2:
            printf("Classification Code: Semi Private\n");
            break;
        case 3:
            printf("Classification Code: Private\n");
            break;
        default:
            printf("Invalid Classification Code. Exiting program.\n");
            return 1; // Exit program for invalid code
    }

    // Input fees
    printf("Hospital Fee: ");
    scanf("%lf", &hf);

    printf("Doctor's Fee: ");
    scanf("%lf", &df);

    // Calculate total bill based on conditions
    if (hf >= 25000) {
        tb = hf + (df * 0.50);
    } else if (hf >= 15001 && hf <= 25000) {
        tb = hf + (df * 0.40);
    } else { // hf <= 15000
        tb = hf + (df * 0.30);
    }

    // Output total bill
    printf("\nPatient Name: %s", pname);
    printf("Total Bill: %.2lf\n", tb);

    printf("\nProgrammer's Name: Elizander Aguila\n");

    return 0;
}
