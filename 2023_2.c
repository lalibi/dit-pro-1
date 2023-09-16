#include <stdio.h>

#define ROWS 100
#define COLS 50

void find(float[][COLS], int, float, int *, int *);

int main(void) {
    int i, j, x, y;
    float a[ROWS][COLS], key;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    scanf("%f", &key);

    find(a, ROWS, key, &x, &y);

    if (x != -1 && y != -1) {
        printf("%.2f appears the most times in row %d and column %d.\n", key, x, y);
    } else {
        printf("%.2f not found.\n", key);
    }

    return 0;
}

/* Find in which row and which colun the key appears the most times. */
void find(float array[][COLS], int rows, float key, int *px, int *py) {
    int i, j, c, max = -1;

    *px = -1;
    *py = -1;

    for (i = 0; i < rows; i++) {
        c = 0;

        for (j = 0; j < COLS; j++) {
            if (array[i][j] == key) {
                c++;
            }
        }

        if (c != 0 && c > max) {
            max = c;
            *px = i; /* pos_i, θi */
        }
    }

    for (j = 0; j < COLS; j++) {
        c = 0;

        for (i = 0; i < rows; i++) {
            if (array[i][j] == key) {
                c++;
            }
        }

        if (c != 0 && c > max) {
            max = c;
            *py = j; /* pos_j, θj */
        }
    }
}
