#include <stdio.h>
#define p printf
#define s scanf

int main() {
    
    int numbers[10],
    positiveNumbers = 0, negativeNumbers = 0, evenNumbers = 0, oddNumbers = 0;

    p("\nWrite any negative or positive integers: \n");
    for (int i = 0; i < 10; i++) {
        p("%d) Enter any number: ", i + 1);
        s("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) positiveNumbers += 1;
        if (numbers[i] < 0) negativeNumbers += 1;
        if (numbers[i] % 2 == 0) evenNumbers += 1;
        if (numbers[i] % 2 == 1) oddNumbers += 1;
    }

    p("\n================ RESULT ===============\n");
    p("\nARRAY: ");
    for (int i = 0; i < 9; i++) {
        p("%d, ", numbers[i]);
    }
    p("%d\n", numbers[sizeof(numbers) / sizeof(numbers[0]) - 1]);

    p("\nPositives: %d\n", positiveNumbers);
    p("Negatives: %d\n", negativeNumbers);
    p("Even: %d\n", evenNumbers);    
    p("Odd: %d\n", oddNumbers);

    p("\nPROGRAMER'S NAME: CUENZA, RICKY\n\n");
}