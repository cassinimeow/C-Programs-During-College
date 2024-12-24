#include <stdio.h>

int a = 1111, b = 4444;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void pointerSwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("\nOriginal Values: A = %d B = %d\n", a, b);

    swap(a, b);
    printf("\nAttemped Swapped Values: A = %d B = %d\n", a, b);
    
    pointerSwap(&a, &b);
    printf("\nReal Swapped Values: A = %d B = %d\n\n", a, b);
    
    return 0;
}