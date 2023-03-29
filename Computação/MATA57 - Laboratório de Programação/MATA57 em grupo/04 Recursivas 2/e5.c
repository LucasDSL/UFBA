//feito por Adrielle Andrade Carvalho e Alan Cristian Nunes da Silva
#include<stdio.h>
#include<stdlib.h>

int k = 0;
int count = 0;

void  iniciar(int n, int *a1, int *a2, int *a3) {
    system("clear||cls");
    printf("Número de jogadas: %d\n", count);
    int i;
    for(i = 0; i < n; i++) {
        a1[i] = i+1;
        a2[i] = 0;
        a3[i] = 0;
    }
    for(i = 0; i < n; i++) {
        printf("   %d         %d         %d\n", a1[i], a2[i], a3[i]);
    }
    printf("TORRE 1   TORRE 2   TORRE 3\n\n\n\n");
    system("pause");

}

void tick(int  n, int *o, int *d) {
    int aux = 0;
    int i;
    for(i = 0; i < n; i++) {
        if(o[i] != 0){
            aux = o[i];
            o[i] = 0;
            break;
        }
    }
    for(i = n-1; i >= 0; i--) {
        if(d[i] == 0) {
            d[i] = aux;
            break;
        }
    }
}

void render(int  n, int *a1, int *a2, int *a3,const char *o ,const char *d){
    system("clear||cls");
    printf("Número de jogadas: %d\n", count);
    int i;
    for(i = 0; i < n; i++) {
        printf("   %d         %d         %d\n", a1[i], a2[i], a3[i]);
    }
    printf("TORRE 1   TORRE 2   TORRE 3\n\n");
    printf("Da %s para %s\n\n", o, d);
}

void solucao(int n,const char *o,const char *d,const char *a, int *a1, int *a3, int *a2, int *t1, int *t2, int *t3){
    if(n == 1){
        tick(k, a1, a3);
        count ++;
        render(k, t1, t2, t3, o, d);
        system("pause");
    } else {
        solucao(n-1, o, a, d, a1, a2, a3, t1, t2, t3);
        tick(k, a1, a3);
        count ++;
        render(k, t1, t2, t3, o, d);
        system("pause");
        solucao(n-1, a, d, o, a2, a3, a1, t1, t2, t3);
    }

}

int main () {
    int n;
    const char o[8] = "TORRE 1", d[8] = "TORRE 3", a[8] = "TORRE 2";
    printf("Digite a quantidade de discos: ");
    scanf("%d", &n);
    k = n;
    int a1[n], a2[n], a3[n];

    iniciar(n, a1, a2, a3);
    solucao(n, o, d, a, a1, a3, a2, a1, a2, a3);
    return 0;
}
