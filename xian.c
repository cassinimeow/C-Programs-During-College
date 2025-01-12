#include <stdio.h>

int main() {
    int grade[3];
    int j;

    for (j = 0; j <= 2; j++)
    {
        printf("Enter Grades: ");
        scanf("%d", &grade[j]);
    }
    
    return 0;
}
