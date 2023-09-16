#include <stdio.h>

#define MAX_TEXT_LENGTH 25

int main(void) {
    char str[MAX_TEXT_LENGTH];

    int x;

    printf("Give me an integer: ");
    scanf("%d", &x);

    getchar(); /* Read the newline character */
    printf("Enter text: ");
    fgets(str, MAX_TEXT_LENGTH, stdin); /* Read a string that may contain spaces */

    printf("%s %d\n", str, x);

    return 0;
}
