#include <stdio.h>

int main(void) {
    int sum = 0;
    int count = 0;
    double average = 0.0;
    char c;

    printf("Entrez des nombres entre 0 et 20 (arrêtez avec un caractère non numérique) :\n");

    while (1) {
        int num = 0;
      
        if ((c = getchar()) < '0' || c > '9') {
           
            break;
        }

        
        num = c - '0';

        while ((c = getchar()) >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }

        if (num >= 0 && num <= 20) {
            sum += num;
            count++;
            average = (double)sum / count;
            printf("La moyenne en temps réel est de %f\n", average);
        } else {
            
            printf("Nombre non valide ignoré.\n");
        }
    }

    return 0;
}