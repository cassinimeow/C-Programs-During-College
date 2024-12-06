#include <stdio.h>
#define p printf
#define s scanf

int main() {
    float num1, num2, ot;
    char op;

    while (1) {
        p("\n\nEnter First Number: ");
        s("%f", &num1);

        p("Enter Second Number: ");
        s("%f", &num2);

        p("Enter Operator (+,-,*,/): ");
        s(" %c", &op);
        

        switch (op) {
            case '+':
                ot = num1 + num2;
                p("Output: %.2f", ot);
                break;

            case '-':
                ot = num1 - num2;
                p("Output: %.2f", ot);
                break;

            case '*':
                ot = num1 * num2;
                p("Output: %.2f", ot);
                break;   
            
            case '/':
                ot = num1 * num2;
                p("Output: %.2f", ot);
                break;   
            
        }
    }
}