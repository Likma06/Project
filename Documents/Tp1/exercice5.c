#include<stdio.h>

void lire_flottant() {
    int n = 0, compt = 0, d = 10;
    double r = 0.0, res = 0.0;
    char c;

    printf("entier> ");

    while ((c = getchar()) != '\n' && c != EOF) {
        if ((c >= '0' && c <= '9') || c == '.') {
            if (c == '.') {
                compt = 1; 
            } else {
                if (compt) {
                    r = r + ((double)(c - '0') / d); 
                    d = d * 10;
                } else {
                    n = n * 10 + (c - '0');
                }
            }
        } else {
            break; 
        }
    }

    res = (double)n + r;
    printf("%f\n", res);
}

int main() {
    lire_flottant();
    return 0;
}