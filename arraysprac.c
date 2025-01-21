#include <stdio.h>

int main() {

    //For Loop
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("%d\n", myNumbers[i]);
    }
    
    //Change Array Size
    int myNumbers2[5] = {1, 2, 3, 4, 5};
    myNumbers2[5] = 6;
    printf("\n%d\n", myNumbers2[5]);

    //Getting Array Length
    int myNumbers3[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(myNumbers3) / sizeof(myNumbers3[0]);
    printf("\n%d\n", length);

    //Better loops for getting length if size is not specified
    int myNumbers4[] = {10, 20, 30, 40, 50};
    int length1 = sizeof(myNumbers4) / sizeof(myNumbers4[0]);
    int i;

    for (i = 0; i < length1; i++)
    {
        printf("\n%d", myNumbers4[i]);
    }
    


    return 0;
}

   

