#include <stdio.h>
#include <stdbool.h>


bool estPremier(int nombre) {
    int i;
    if (nombre <= 1) {
        return false;
    }

    for (i = 2; i * i <= nombre; i++) {
        if (nombre % i == 0) {
            return false;
        }
    }

    return true;
}


bool estParfait(int nombre) {
    int i;
    int sommeDiviseurs = 1;
    if (nombre <= 1) {
        return false;
    }

    

    for (i = 2; i * i <= nombre; i++) {
        if (nombre % i == 0) {
            sommeDiviseurs += i;

            if (i * i != nombre) {
                sommeDiviseurs += nombre / i;
            }
        }
    }

    return (sommeDiviseurs == nombre);
}


bool estDoublon(int nombre) {
    int i;
    int sommeDiviseurs = 1;
    int produitDiviseurs = 1;
    if (nombre <= 1) {
        return false;
    }


    for (i = 2; i * i <= nombre; i++) {
        if (nombre % i == 0) {
            sommeDiviseurs += i;
            produitDiviseurs *= i;

            if (i * i != nombre) {
                sommeDiviseurs += nombre / i;
                produitDiviseurs *= nombre / i;
            }
        }
    }

    return (produitDiviseurs % sommeDiviseurs == 0);
}


void afficherPremiers(int k) {
    int nombre = 2;
    int count = 0;
    printf("Les %d premiers nombres premiers :\n", k);

    while (count < k) {
        if (estPremier(nombre)) {
            printf("%d ", nombre);
            count++;
        }
        nombre++;
    }

    printf("\n");
}


void afficherParfaitsEntreBornes(int borneInf, int borneSup) {
    int i;
    printf("Nombres parfaits entre %d et %d :\n", borneInf, borneSup);

    for (i = borneInf; i <= borneSup; i++) {
        if (estParfait(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}


void afficherDoublonsEntreBornes(int borneInf, int borneSup) {
    int i;
    printf("Doublons entre %d et %d :\n", borneInf, borneSup);

    for (i = borneInf; i <= borneSup; i++) {
        if (estDoublon(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int choix;
    
    do {
        printf("Choisissez une option :\n");
        printf("0 - Quitter\n");
        printf("1 - Afficher les k premiers nombres premiers\n");
        printf("2 - Afficher les nombres parfaits entre deux bornes\n");
        printf("3 - Afficher les doublons entre deux bornes\n");
        scanf("%d", &choix);

        switch (choix) {
            case 0:
                printf("Programme terminé.\n");
                break;
            case 1:
                {
                    int k;
                    printf("Entrez la valeur de k : ");
                    scanf("%d", &k);
                    afficherPremiers(k);
                    break;
                }
            case 2:
                {
                    int borneInf, borneSup;
                    printf("Entrez la borne inférieure : ");
                    scanf("%d", &borneInf);
                    printf("Entrez la borne supérieure : ");
                    scanf("%d", &borneSup);
                    afficherParfaitsEntreBornes(borneInf, borneSup);
                    break;
                }
            case 3:
                {
                    int borneInf, borneSup;
                    printf("Entrez la borne inférieure : ");
                    scanf("%d", &borneInf);
                    printf("Entrez la borne supérieure : ");
                    scanf("%d", &borneSup);
                    afficherDoublonsEntreBornes(borneInf, borneSup);
                    break;
                }
            default:
                printf("Option invalide. Veuillez réessayer.\n");
                break;
        }
    } while (choix != 0);

    return 0;
}