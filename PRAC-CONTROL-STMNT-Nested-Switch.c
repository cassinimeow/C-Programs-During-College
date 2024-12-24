#include <stdio.h>

int main () {

char cid;
char pn[50];

printf("\tNYK Shipping Co.\n");
printf("\t  Manifesto\n\n");

printf("Passenger's Name: ");
fgets(pn, sizeof(pn), stdin);

printf("Class I.D: ");
scanf(" %c", &cid);

switch (cid)
{
case 'B':
case 'b':
    printf("Ship Class: Battleship\n\n");
    break;
    
case 'C':
case 'c':
    printf("Ship Class: Cruise\n\n");
    break;

case 'D':
case 'd':
    printf("Ship Class: Destroyer\n\n");
    break;

case 'F':
case 'f':
    printf("Ship Class: Frigate\n\n");
    break;

case 'G':
case 'g':
    printf("Ship Class: Passenger's\n\n");
    break;

default:
    printf("Invalid Class I.D\n");
    return 1;
}

printf("Programmer's Name: Elizander Aguila");

    return 0;
}