#include<stdio.h>
#include<limits.h>

int fibo_naif(int n){
    int i,u=1,s=1,r;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }else{
        for(i=3;i<n;i++){
        r=u;
        u=u+s;
        s=r;

    }
    return u;

    }
}

int somme(int a,int b){
    if (b>0 && a> (INT_MAX - b)){
        return -1;
    }
    if(b<0 && a< (INT_MIN - b)){
        return -1;
    }
    else{
        return a+b;
    }
}

int fibonnaci(int n){
    int i,u=1,s=1,r;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n>=48){
        return -1;
    }
    else{
        for(i=3;i<n;i++){
        r=u;
        u=somme(u,s);
        s=r;

    }
    return u;

    }

}
void fibonnaci2(){
    int f,n;
    char c;
    while(1){
        printf("entier>");
        if((c=getchar())>'9'  || c<'0'){
            break;
        }
        printf("%d\n",c);
        n=c-'0';
        printf("%d\n",n);
        while((c=getchar()) <='9' && c>='0'){
            n=n*10 +(c-'0');
            printf("%d\n",n);
        }
        printf("%d\n",n);
        f=fibonnaci(n);
        if (f== -1){
            printf("Débordement d'entier\n");
        }else{
            printf("fibo(%d) = %d\n",n,f);
        }
    
    

    }

}
int main(){
    fibonnaci2();
    return 0;
}