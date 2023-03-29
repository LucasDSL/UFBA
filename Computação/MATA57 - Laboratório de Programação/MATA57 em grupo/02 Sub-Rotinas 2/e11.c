#include <stdio.h>
#include <string.h>

unsigned long SomaDigitos(unsigned long n) {
  char str[12];
  sprintf(str, "%lu", n);
  int soma = 0;
  for (int i = 0; i < strlen(str); i++) {
    soma += str[i] - '0';
  }
  return soma;
}
int main() {
  printf("%lu", SomaDigitos(1111111111123456789));
} 