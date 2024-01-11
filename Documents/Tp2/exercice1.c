#include <stdio.h>

#include <stdio.h>

void affiche_tableau(int tab[], int n) {
    int i;
    if (n <= 0) {
        printf("Erreur : n doit être un entier positif.\n");
        return;
    }

    printf("Contenu du tableau : ");
    
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int n = 3; 

    affiche_tableau(tableau, n);

    return 0;
}