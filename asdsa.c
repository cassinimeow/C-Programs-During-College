#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40};

    char name[] = {'c', 'l', 'a', 'i', 'r', 'e'};

    char name2[] = "claire";

    for (int i = 0; i < 6; i++) {
        printf("%c", name2[i]);
    }

    printf("%s", name2);
    

    return 0;
}