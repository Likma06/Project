#include <stdio.h>

void pyramide(int n) {
    int i, e, s, u;
    char c;

    printf("entier>%d\n", n);

    u = n;
    s = 1;

    while (s <= u) {
        e = 0;
        for (i = 0; i < n; i++) {
            printf(" ");
        }

        while (e < s) {
            printf("* ");
            e++;
        }

        s++;
        printf("\n");
        n--;
    }

    while (1) {
        i = 0;
        e = 0;

        printf("entier>");
        if ((c = getchar()) < '0' || c > '9') {
            break;
        }
        n = c - '0';

        while ((c = getchar()) >= '0' && c <= '9') {
            n = n * 10 + (c - '0');
        }

        u = n;
        s = 1;

        while (s <= u) {
            e = 0;
            for (i = 0; i < n; i++) {
                printf(" ");
            }

            while (e < s) {
                printf("* ");
                e++;
            }

            s++;
            printf("\n");
            n--;
        }
    }
}

int main(void) {
    pyramide(7);
    return 0;
}
