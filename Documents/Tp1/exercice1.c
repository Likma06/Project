#include<stdio.h>
int main(void) {
int u,d,c,n;
u = 1;
d = 2;
c = 3;
n = 100*c + 10*d + u; /* c vaut 3, d vaut 2 et u vaut 1 */
printf("321 = %i\n",n); /* affiche « 321 = 321 » */
return 1;
}