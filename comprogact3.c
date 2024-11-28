#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int sno, noite, ppi, sales;
    char sna[50];
    char sc;

    printf("\n\t\t\t ABC University\n");
    printf("\t\t\t  Makati City\n\n");

    printf("Salesman No.: ");
    scanf("%d", &sno);
    getchar();

    printf("Salesman Name: ");
    fgets(sna, sizeof(sna), stdin);

    printf("Section Code: ");
    scanf("%c", &sc);

    switch (sc)
{
    case 'A':
    case 'a':
        printf("Section: Ladies Section\n");
        break;
        
    case 'B':
    case 'b':
        printf("Section: Men’s Section\n");
        break;

    case 'C':
    case 'c':
        printf("Section: Infant’s Section\n");
        break;

    case 'D':
    case 'd':
        printf("Section: Children’s Section\n");
        break;

    case 'E':
    case 'e':
        printf("Section: Shoe’s Section\n");
        break;
    
    case 'F':
    case 'f':
        printf("Section: KitchenWare Section\n");
        break;
    
    case 'G':
    case 'g':
        printf("Section: Appliances Section\n");
        break;

    default:
        printf("Unidentified Section!\n");
        exit(0);
        break;
}
    
    printf("No. of Items: ");
    scanf("%d", &noite);

    printf("Price per Item: ");
    scanf("%d", &ppi);

    sales = noite * ppi;
    
    printf("Sales: %d\n", sales);

    if (sales >= 1 && sales <= 10000)
    {
        printf("Commission: 1\n\n");
    }
     else if (sales >= 10001 && sales <= 15000)
    {
        printf("Commission: 2\n\n");
    }
     else if (sales >= 15001 && sales <= 20000)
    {
        printf("Commission: 3\n\n");
    }
     else if (sales >= 20001 && sales <= 25000)
    {
        printf("Commission: 4\n\n");
    }
     else if (sales >= 25001)
    {
        printf("Commission: 5\n\n");
    }
    
    printf("Programmer's Name: Elizander Aguila");

    return 0;
}