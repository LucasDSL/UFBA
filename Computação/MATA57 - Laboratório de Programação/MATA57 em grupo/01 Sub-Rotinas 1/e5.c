#include <stdio.h>

//Exercicio 05 de Subrotinas
//Feito por Jonas

int fatorial(int n) {
    if (n == 1) return n;
    return n * fatorial(n - 1);
}

int main()
{
  printf("%d", fatorial(5));
}
