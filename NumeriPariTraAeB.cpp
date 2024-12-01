#include <stdio.h>

int NumeriPari(int a, int b) {
    int swap = 0;
    if (a > b) {
        swap = b;
        b = a;
        a = swap;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
