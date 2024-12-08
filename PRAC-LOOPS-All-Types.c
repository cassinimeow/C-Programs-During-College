#include <stdio.h>

int main() {
    
    int i;
    for (i = 0; i <= 100; i++) {
        printf("Counting: %d\n", i);
    }
    
    int j = 0;
    while (j <= 5) {
        printf("Counting While: %d\n", j);
        j++;
    }
    
    int k = 0;
    do {
        printf("Counting Do-While: %d\n", k);   
        k++;
    } while (k <= 5);
    

    return 0;
}