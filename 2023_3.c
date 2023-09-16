#include <stdio.h>

char *find(char *a) {
    int i = 0;

    /* for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' && a[i + 1] == 'e' && a[i + 2] == 'k')
        {
            if (a[i + 3] == '\0')
            {
                return NULL;
            }
            else
            {
                return &a[i + 3];
            }
        }
    } */

    while (1) {
        if (a[i] == '\0') {
            return NULL;
        } else if (a[i] == 'a' && a[i + 1] == 'e' && a[i + 2] == 'k') {
            if (a[i + 3] == '\0') {
                return NULL;
            } else {
                return &a[i + 3];
            }
        }

        i++;
    }
}

int main(void) {
    char a[100], *p;

    scanf("%s", a);
    p = find(a);

    if (p == NULL) {
        printf("Not found.\n");
    } else {
        /* panatenekos */
        printf("%c\n", *p); /* o */
        printf("%s\n", p);  /* os */
    }

    return 0;
}
