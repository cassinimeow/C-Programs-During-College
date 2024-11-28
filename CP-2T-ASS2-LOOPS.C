#include <stdio.h>

int main() {

    int loop, sum = 0,
    i, number;

    printf("\n(FOR LOOP)");
    printf("\nEnter a number of loops: ");
    scanf("%d", &loop);
    for (i = 0; i < loop; i++) {
        printf("Loop %d: Enter a number: ", i+1);
        scanf("%d", &number);
        sum += number;
    }
    printf("Sum: %d", sum);

    printf("\n\n(WHILE LOOP)");
    sum = 0;
    printf("\nEnter a number of loops: ");
    scanf("%d", &loop);
    i = 1;
    while (i <= loop) {
        printf("Loop %d: Enter a number: ", i);
        scanf("%d", &number);
        sum += number;
        i++;
    }
    printf("Sum: %d", sum);

    printf("\n\nDO-W(HILE LOOP)");
    sum = 0;
    printf("\nEnter a number of loops: ");
    scanf("%d", &loop);
    i = 1;
    do {
        printf("Loop %d: Enter a number: ", i);
        scanf("%d", &number);
        sum += number;
        i++;
    } while (i <= loop);
    printf("Sum: %d", sum);
    
    return 0;
}
