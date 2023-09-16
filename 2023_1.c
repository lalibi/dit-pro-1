#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int luck(int, int);

int main(void) {
    srand(time(NULL));

    int i, n[6];

    for (i = 0; i < 5; i++) {
        n[i] = luck(1, 45);
        printf("%d ", n[i]);
    }

    n[5] = luck(1, 20);
    printf("- %d\n", n[5]);

    return 0;
}

int luck(int x, int y) {
    if (x == y) return x;

    if (y < x) {
        int t;
        t = x;
        x = y;
        y = t;
    }

    return rand() % (y - x + 1) + x;
}
