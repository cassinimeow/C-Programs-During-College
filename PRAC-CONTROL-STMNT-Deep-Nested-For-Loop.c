#include <stdio.h>

int main() {
    int i, j, k, l, m, n;

    for (i = 0; i < 10; i++) {
        for (j = i; j < 15; j++) {
            if (j % 2 == 0) {
                continue;
            }
            for (k = 0; k < 5; k++) {
                if (k == 2) {
                    break;
                }
                for (l = 10; l > 0; l--) {
                    if (l % 3 == 0) {
                        continue;
                    }
                    for (m = -5; m < 5; m++) {
                        if (m == 0) {
                            continue;
                        }
                        for (n = 100; n > 50; n--) {
                            if (n % 7 == 0) {
                                printf("Complex loop iteration: i=%d, j=%d, k=%d, l=%d, m=%d, n=%d\n", i, j, k, l, m, n);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}