#include <stdio.h>

int main() {

    int number = 33;
    printf("Variable Value: %d\n", number);
    printf("Memory Address in HEX: %p\n", &number);

    // Using a pointer to store the address returned by the address operator and then dereferencing it.
    int x = 10;
    int* ptrX;
    ptrX = &x;

    printf("\nValue of accessed variable: %d\n", *ptrX);
    
    return 0;
}