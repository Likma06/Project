#include<stdio.h>
void question1(void) {
    printf("Hello World\n");
}
void question2(void){
    int i;
    for (i=65;i<=90;i++){
        printf("%i ",i);
    }
    printf("\n");
}
void question3(void){
    int i;
    char c;
    for (i=65;i<=90;i++){
        c=i;
        printf("%c ",c);
    }
    printf("\n");
}
void question4(void){
    const char * s="Pi vaut ";
    double x=3.1415926;
    printf("%s%f\n",s,x);
}
void question5(void) {
    char c = 'a';
    int i = c + 1;
    printf("Valeur de c en caractère est '%c' et son équivalent décimal vaut %d\n",c,c);
    printf("Valeur de i en caractère est '%c' et son équivalent décimal vaut %d\n",i,i);
}
void question6(void){
    int i;
    for (i='a';i<'z';i++){
        printf("%d ",i);
    }
    printf("\n");
}

int main(void) {
question1();
question2();
question3();
question4();
question5();
question6();
return 0 ;
}