#include <stdio.h>

int main() {
    int salesmanNo, section, noOfItems;
    float pricePerItem, sales, commission;
    char salesmanName[30], sectionCode;

    printf("\n\tABC Department Store\n\t    Makati City");

    printf("\n\nSalesman No: ");
    scanf("%d", &salesmanNo);

    printf("Salesman Name: ");
    scanf("%s", salesmanName);

    printf("Section Code: ");
    scanf(" %c", &sectionCode);

    switch (sectionCode) {
        case 'A':
        case 'a':
            printf("Section: Ladies Section");
            break;
        case 'B':
        case 'b':
            printf("Section: Men's Section");
            break;
        case 'C':
        case 'c':
            printf("Section: Infant's Section");
            break;
        case 'D':
        case 'd':
            printf("Section: Children's Section");
            break;
        case 'E':
        case 'e':
            printf("Section: Shoe's Section");
            break;
        case 'F':
        case 'f':
            printf("Section: KitchenWare Section");
            break;
        case 'G':
        case 'g':
            printf("Section: Appliance's Section");
            break;
        default:
            printf("Unidentified Section");
    }
    printf("\nNo. of items: ");
    scanf("%d", &noOfItems);
    printf("Price per items: ");
    scanf("%f", &pricePerItem);

    sales = noOfItems * pricePerItem;
    printf("Sales: %.2f\n", sales);

    if (sales > 25000) commission = sales * 0.05;
    else if (sales >= 20001 && sales <= 25000) commission = sales * 0.04;
    else if (sales >= 15001 && sales <= 20000) commission = sales * 0.03;
    else if (sales >= 10001 && sales <= 15000) commission = sales * 0.02;
    else commission = sales * 0.01;
    printf("Commission: %.2f\n", commission);
    
    printf("\nProgrammer's Name: CUENZA, RICKY S.\n\n");

    return 0;
}