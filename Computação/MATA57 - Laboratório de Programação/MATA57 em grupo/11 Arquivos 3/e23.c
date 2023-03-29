#include <stdio.h>

struct Empregados {
  char prof[128];
  int tempo;
};

void escrita();
void leitura();

int main(void) {
  struct Empregados funcionarios[5];
  char print[1024];
  FILE * arquivo = fopen("emp.txt", "w+");
  for (int i = 0; i < 5; i++) {
    printf("Nome do funcionario: \n");
    scanf("%s", funcionarios[i].prof);
    printf("Tempo de servico: \n");
    scanf("%d", &funcionarios[i].tempo);
  }
  escrita(funcionarios, arquivo);

  rewind(arquivo);

  leitura(arquivo);
  
  return 0;
}

void escrita(struct Empregados * emp, FILE * arq) {
  for (int i = 0; i < 5; i++) {
    fprintf(arq, "Funcionario 0000%d: %s, %d anos em servico\n", i + 1, emp[i].prof, emp[i].tempo);
  }
}
void leitura (FILE * arq) {
  char str[128];
  for (int i = 0; i < 5; i++) {
    fscanf(arq, "%[^\n]%*c", str);
    printf("%s\n", str);
  }
}
