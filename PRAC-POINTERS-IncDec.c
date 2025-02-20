#include <stdio.h>

// Pointers Increment and Decrement
// pointers are incremented and decremented by the size of the data type they point to
int main() {
    int a = 22;
    int *p = &a;
    printf("p = %u\n", p);  // p = 6422288
    p++;
    printf("p++ = %u\n", p);  // p++ = 6422292    +4   // 4 bytes
    p--;
    printf("p-- = %u\n", p);  // p-- = 6422288     -4   // restored to original value

    float b = 22.22;
    float *q = &b;
    printf("q = %u\n", q);  // q = 6422284
    q++;
    printf("q++ = %u\n", q);  // q++ = 6422288      +4   // 4 bytes
    q--;
    printf("q-- = %u\n", q);  // q-- = 6422284       -4  // restored to original value

    char c = 'a';
    char *r = &c;
    printf("r = %u\n", r);  // r = 6422283
    r++;
    printf("r++ = %u\n", r);  // r++ = 6422284     +1   // 1 byte
    r--;
    printf("r-- = %u\n", r);  // r-- = 6422283     -1  // restored to original value

    return 0;
}
