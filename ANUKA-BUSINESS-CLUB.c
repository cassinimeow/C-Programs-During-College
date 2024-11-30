#include <stdio.h>

int main() {
    printf("\tANUKA BUSINESS CLUB\n\t     Pasig City\n");

    int employeeNo, yearsInService, employeeProcessed = 1;
    char employeeName[50], response;
    float bonus;

    while (1) {
        printf("\nEmployee Name: ");
        fgets(employeeName, sizeof(employeeName), stdin);

        printf("Employee No: ");
        scanf("%d", &employeeNo);

        printf("Years in Service: ");
        scanf("%d", &yearsInService);
        
        if (yearsInService >= 35 && yearsInService) bonus = 35000;
        else if (yearsInService >= 30 && yearsInService < 35) bonus = 30000;
        else if (yearsInService >= 25 && yearsInService < 30) bonus = 25000;
        else if (yearsInService >= 20 && yearsInService < 25) bonus = 20000;
        else bonus = 0;
        printf("Bonus: %.2f", bonus);

        printf("\n\nProcess Another? Y/N: ");
        scanf(" %c", &response);
        getchar();

        if (response == 'Y' || response == 'y') employeeProcessed++;
        else if (response == 'N' || response == 'n') break;
        else printf("\nInvalid Input!");
    }

    printf("\nTotal No. of Employee Processed: %d", employeeProcessed);

    printf("\n\nProgrammer's Name: Student ni Prof. Melanie Crasco ng DIT 1-3\n");

    return 0;
}