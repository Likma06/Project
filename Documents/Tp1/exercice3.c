#include<stdio.h>

int lire_entier() {
    char c;
    int n=0;
    printf("entier> ");
    while ((c = getchar()) != '\n') {
        if(c>='0' && c<='9'){
            n=n*10+(c-'0');
        }
        else{
            return -1;
        }
        
    }
    return n;

    return 0;
}

void parite(){
    char c;
    int n=0;
    printf("entier>");
    while ((c=getchar()) != '\n'){
        if (c>='0' && c<='9'){
            n=n*10 +(c-'0');
        }
        else{
            printf("Ce n'est pas un entier\n");
            return;
        }
    }
    if (n%2==0){
        printf("L'entier %d est pair.\n",n);
        }
        else{
        printf("L'entier %d est impair.\n",n);
        }
}

void moyenne_stdin(){
    int somme=0;
    int compteur=0;
    double moyenne=0.0;
    char c;

    printf("Entrez des nombres entre 0 et 20 (arrêtez avec un caractère non numérique) :\n");

    while(1){
        int num=0;
        if ((c=getchar())>'9' || c<'0' ){
            break;
        }
        num = c-'0';
        while ((c=getchar())>='0' && c<= '9'){
            num = num*10 +(c-'0');
        }
        if(num>=0 && num<=20){
            compteur = compteur + 1;
            somme = somme + num;
            moyenne = (double)somme/compteur;
            printf("La moyenne est %f\n",moyenne);
        }else{
            printf("Le nombre n'est pas comprit entre 0 et 20\n");
        }

    }
    
}
void division_euclidienne(int a,int b){
    int c,d;
    c=a/b;
    d=a-b*c;
    printf("%d = %dx%d + %d\n",a,c,b,d);

} 
void division_decimale(int a,int b){
    double c;
    c=(double)a/b;
    printf("%d=%fx%d\n",a,c,b);
}
void division(int a,int b){
    double d=(double)a/b;
    int c=a/b;
    if (a%b==0){
        printf("%d/%d=%d (exacte)\n",a,b,c);
    }else{
        printf("%d/%d=%f (approchée)\n",a,b,d);
    }
}
void afficher100(){
    int i=1;
    int e=0;
    for(i=1;i<=100;i++){
        if(i<10){
            printf("%d  ",i);
            e++;
        }
        if(i<100 && i>=10){
            printf("%d ",i);
            e++;
        }
        if(i==100){
            printf("%d",i);
            e++;
        }
        if(e==10){
            printf("\n");
            e=0;
        }
    }
}

void pyramide(int n){
    int i=0;
    int e=0;
    int s=1;
    int u;
    char c;
    printf("entier>%d\n",n);
    u=n;
    while(s<=u){
        e=0;
        for(i=0;i<=n;i++){
        printf(" ");
        }
        while(e<s){
        printf("* ");
        e++;
        }
        s++;
        printf("\n");
        n--;
    }
    while(1){
        i=0;
        e=0;
        printf("entier>");
        if ((c=getchar())<'0' || c>'9'){
        break;
        }
        n=c-'0';
        while((c=getchar())>='0' && c<='9'){
            n=n*10 + (c-'0');
        }
        u=n;
        s=1;
        while(s<=u){
            e=0;
            for(i=0;i<=n;i++){
            printf(" ");
            }
            while(e<s){
            printf("* ");
            e++;
            }
            s++;
            printf("\n");
            n--;
        }
    }
        
}


    



int main(void){
    lire_entier();
    pyramide(7);
    return 0;
    }