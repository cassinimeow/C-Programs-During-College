#include <stdio.h>
#include <stdlib.h>

int main() {

char op;
double x, y, sum, minuend, product, quotient;
int kp = 1;

while (kp)
{
    printf("Type the Operator(+, -, *, /) or X to exit: ");
    scanf(" %c", &op);
    
    if (op == 'x'){
        exit(0);
        continue;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y );

    switch (op){
    case '+':
        sum = x + y;
        printf("Sum: %.2lf\n\n", sum);
        break;

    case '-':
        minuend = x - y;
        printf("Minuend: %.2lf\n\n", minuend);
        break;

    case '*':
        product = x * y;
        printf("Product: %.2lf\n\n", product);
        break;

    case '/':
        quotient = x / y;
        printf("Quotient: %.2lf\n\n", quotient);
        break;

    default:
        printf("Invalid Operator!\n");
        break;
    }

  }

    return 0;
}

