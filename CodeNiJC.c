#include <stdio.h>

    int
    main() {
    int n, i, sum = 0;

    printf("For Loop");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of n numbers using for loop: %d\n", sum);

    sum = 0;
    i = 1;


    /// While Loop
    printf("\n\nWhile Loop");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of n numbers using while loop: %d\n", sum);

    sum = 0;
    i = 1;


    // Do-While Loop
    printf("\n\nDo-While Loop");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum of n numbers using do-while loop: %d\n", sum);
    printf("\nProgrammer's Name: John Carlo O. Aguilar\n");
    return 0;
}