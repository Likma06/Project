#include <stdio.h>
#include <stdlib.h>
#include "stdprof.h"

#include "stdprof.c"

int curseurLigne = 4;
int curseurColonne = 5;

int RocherLignes[4] = {1, 2, 8, 7};
int RocherColonnes[4] = {6, 1, 3, 7};

void afficherRocher() {
    int i;
    for (i = 0; i < 4; i++) {
        printf("\033[%d;%dH#", RocherLignes[i] + 3, RocherColonnes[i] * 2 + 3);
        fflush(stdout);
    }
}

void afficherCurseur() {
    printf("\033[%d;%dHR", curseurLigne +3 , curseurColonne *2 + 3 );
    fflush(stdout);
}
void numero(){
    int i;
    printf("  ");
    for(i=0;i<10;i++){
        printf("%i ",i);
    }
    printf("A\n");
}
void plusmoin(){
    int i=0;
    printf(" ");
    while(i<23){
        if (i%2==0){
            printf("+");
            i++;
        }
        else{
            printf("-");
            i++;
        }
    }
    printf("\n");
}
void rest(){
    int i;
    int e=0;
    for(i=0;i<=9;i++){
        printf("%i|",i);
        while(e<21){
            printf(" ");
            
            e++;
        }
        printf("|\n");
        e=0;
    }
    printf("A|");
    while(e<21){
        printf(" ");
        e++;
    }
    printf("|\n");
}

void deplacerCurseur(char direction) {
    int i;
    switch (direction) {
        case 'z':
            if (curseurLigne > 0) {
                for (i=0;i<=4;i++){
                    if ((curseurLigne-1)==RocherLignes[i] && curseurColonne==RocherColonnes[i]){
                        return;
                    }
                }
                curseurLigne--;
            }
            break;
        case 's':
            if (curseurLigne < 10) {
                for (i=0;i<=4;i++){
                    if ((curseurLigne+1)==RocherLignes[i] && curseurColonne==RocherColonnes[i]){
                        return;
                    }
                }
                curseurLigne++;   
            }
            break;
        case 'q':
            if (curseurColonne > 0) {
                for (i=0;i<=4;i++){
                    if ((curseurColonne-1)==RocherColonnes[i] && curseurLigne==RocherLignes[i]){
                        return;
                    }
                }
                curseurColonne--;
            }
            break;
        case 'd':
            if (curseurColonne < 10) {
                for (i=0;i<=4;i++){
                    if ((curseurColonne+1)==RocherColonnes[i] && curseurLigne==RocherLignes[i]){
                        return;
                    }
                }
                curseurColonne++;
                
            }
            break;
        }
    }
int main(){
    char direction;
    
    system("clear");

    numero();
    plusmoin();
    rest();
    plusmoin();
    afficherCurseur();

    while (1) {
        direction = getchar();
        if (direction == 'p') {
            break;
        }

        deplacerCurseur(direction);

        system("clear");
        numero();
        plusmoin();
        rest();
        plusmoin();
        afficherRocher();
        afficherCurseur();
    }

    return 0;
}