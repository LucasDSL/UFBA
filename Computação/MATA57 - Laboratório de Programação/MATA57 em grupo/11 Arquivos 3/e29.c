//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  int codigoVendedor;
  char nomeVendedor[100];
  double valor;
  int mes;
}registro;

//OrdenaÃ§Ã£o
void ordenacao(registro *registros, long int tamanho){
  registro aux;
  for(int j = tamanho-1; j >= 1; j--) {
    for(int i = 0; i<j; i++) {
      //Ordena por cÃ³digo do vendedor
      if(registros[i].codigoVendedor > registros[i+1].codigoVendedor) {
        aux = registros[i];
        registros[i] = registros[i+1];
        registros[i+1] = aux;
      }else if(registros[i].codigoVendedor == registros[i+1].codigoVendedor){
        //Ordena por mÃªs
        if(registros[i].mes > registros[i+1].mes) {
          aux = registros[i];
          registros[i] = registros[i+1];
          registros[i+1] = aux;
        }
      }
    }
  }
}

//VerificarExistencia
bool verificarExistencia(registro reg, registro *registros, long int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    if(reg.codigoVendedor == registros[i].codigoVendedor && reg.mes == registros[i].mes) {
      return true;
    }
  }
  return false;
}

// CriaÃ§Ã£o do menu e interaÃ§Ã£o com o usÃºario
void menu(int *acao) {
  system("@cls||clear");
  printf("1 - Criar arquivo de dados\n");
  printf("2 - Excluir arquivo de dados\n");
  printf("3 - Adicionar novo registo\n");
  printf("4 - Excluir vendedor\n");
  printf("5 - Alterar valor de venda\n");
  printf("6 - Imprimir registros\n");
  printf("7 - Finalizar o programa\n");
  printf("Digite a aÃ§ao que deseja realizar: ");
  scanf("%i", acao);
}

// Criar arquivo de dados
void criarArquivo() {
  system("@cls||clear");
  //CriaÃ§Ã£o das variÃ¡veis auxiliares
  char nomeArquivo[100];
  FILE *arquivo;
  //Entrada de dados
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  //CriaÃ§Ã£o do arquivo
  arquivo = fopen(nomeArquivo, "rb");
  if(arquivo == NULL) {
    arquivo = fopen(nomeArquivo,"wb");
    printf("Aquivo criando com sucesso!\n");
  }else {
    printf("Arquivo jÃ¡ existente!\n");
  }
  //Fechamento do arquivo
  fclose(arquivo);
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

// Excluir arquivo de dados
void excluirArquivo() {
  system("@cls||clear");
  //CriaÃ§Ã£o das variÃ¡veis auxiliares
  char nomeArquivo[100];
  //Etrada de dados
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  //RemoÃ§Ã£o do Arquivo
  if(remove(nomeArquivo) != -1) {
    printf("Arquivo removido com sucesso!\n");
  }else {
    printf("O arquivo digitado nÃ£o existe!\n");
  }
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

//Adicionar novo registo
void adicionarRegistro() {
  system("@cls||clear");
  //Entrando no arquivo
  char nomeArquivo[100];
  FILE *arquivo;
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  arquivo = fopen(nomeArquivo, "r+b");
  //Verificando a existÃªncia do arquivo
  if(arquivo != NULL) {
    //Tamanho do Arquivo
    fseek(arquivo, 0L, SEEK_END);
    long int tamanhoArquivo= ftell(arquivo);
    //Retornando o curso atÃ© o inÃ­cio
    rewind(arquivo);
    //Alocando array de registros
    registro *registros = malloc(tamanhoArquivo + sizeof(registro));
    //Atribuindo os registros ao array
    fread(registros, sizeof(registro), tamanhoArquivo/sizeof(registro), arquivo);
    //CriaÃ§Ã£o do registro a ser armazenado
    registro reg;
    printf("Digite o cÃ³digo do vendedor: ");
    scanf("%i", &reg.codigoVendedor); 
    printf("Digite o nome do vendedor: ");
    scanf("%s", reg.nomeVendedor);
    printf("Digite o valor: ");
    scanf("%lf", &reg.valor);
    printf("Digite o mÃªs: ");
    scanf("%i", &reg.mes);
    //Verificando existÃªncia no array
    if(!verificarExistencia(reg, registros, tamanhoArquivo/sizeof(registro))) {
      //Armazenando registro no array
      registros[tamanhoArquivo/sizeof(registro)] = reg;
      //OrdenaÃ§Ã£o
      ordenacao(registros, (tamanhoArquivo/sizeof(registro))+1);
    
      //Retornando o curso atÃ© o inÃ­cio
      rewind(arquivo);
      //Atualizando registros
      fwrite(registros, sizeof(registro), (tamanhoArquivo/sizeof(registro))+1, arquivo);

      printf("Registro adicionado com sucesso!\n");
    }else {
      printf("Registro jÃ¡ existente!\n");
    }
    free(registros);
    fclose(arquivo);
  }else {
    printf("O arquivo digitado nÃ£o existe!\n");
  }
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

//Excluir vendedor
void excluirVendedor() {
  system("@cls||clear");
  //Entrando no arquivo
  char nomeArquivo[100];
  FILE *arquivo;
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  arquivo = fopen(nomeArquivo, "r+b");
  if(arquivo != NULL) {
    //Tamanho do Arquivo
    fseek(arquivo, 0L, SEEK_END);
    long int tamanhoArquivo= ftell(arquivo);
    //Retornando o curso atÃ© o inÃ­cio
    rewind(arquivo);
    //Alocando array de registros
    registro *registros = malloc(tamanhoArquivo);
    //Atribuindo os registros ao array
    fread(registros, sizeof(registro), tamanhoArquivo/sizeof(registro), arquivo);
    fclose(arquivo);
    //Entrada de dados
    int id;
    printf("Id do vendedor: ");
    scanf("%i", &id);
    //Buscando a quantidade de vezes que o vendedor aparece
    int count = 0;
    for(int i = 0; i < tamanhoArquivo/sizeof(registro); i++) {
      if(id == registros[i].codigoVendedor){
        count ++;
      }
    }
    if(count != 0) {
      //resentando o arquivo
      printf("Entrou\n");
      arquivo = fopen(nomeArquivo, "wb");
      if((tamanhoArquivo/120)-count > 0){
        long int novoTamanho = ((tamanhoArquivo/(sizeof(registro)))-count);
        registro *novoregistro = malloc(novoTamanho * sizeof(registro));
        int newI = 0;
        for(int i = 0; i < tamanhoArquivo/sizeof(registro); i++) {
          if(registros[i].codigoVendedor != id) {
            novoregistro[newI] = registros[i];
            newI ++;
          }
        }
        //Retornando o curso atÃ© o inÃ­cio
        rewind(arquivo);
        //Atualizando registros
        fwrite(novoregistro, sizeof(registro), novoTamanho, arquivo);
        free(novoregistro);
        printf("Vendedor removido com sucesso!");
      }
    }else {
      printf("Id nÃ£o encontrado!");
    }
    //Criar novo registro
    
    
    
    //Desalocando a memoria do array
    free(registros);
    
  }else {
    printf("O arquivo digitado nÃ£o existe!\n");
  }
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

//Alterar valor de venda
void alterarVenda() {
  system("@cls||clear");
  //Entrando no arquivo
  char nomeArquivo[100];
  FILE *arquivo;
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  arquivo = fopen(nomeArquivo, "r+b");
  if(arquivo != NULL) {
    //Tamanho do Arquivo
    fseek(arquivo, 0L, SEEK_END);
    long int tamanhoArquivo= ftell(arquivo);
    //Retornando o curso atÃ© o inÃ­cio
    rewind(arquivo);
    //Alocando array de registros
    registro *registros = malloc(tamanhoArquivo);
    //Atribuindo os registros ao array
    fread(registros, sizeof(registro), tamanhoArquivo/sizeof(registro), arquivo);
    //Entrando com os valores do registro
    int id, mes;
    printf("Id do vendedor: ");
    scanf("%i", &id);
    printf("MÃªs: ");
    scanf("%i", &mes);
    //Flag
    bool alterou = false;
    for(int i = 0; i < tamanhoArquivo/sizeof(registro); i++) {
      if(id == registros[i].codigoVendedor && mes== registros[i].mes) {
        printf("Novo valor: ");
        scanf("%lf",  &registros[i].valor);
        alterou = true;
        break;
      }
    }

    if(alterou) {
      //Retornando o curso atÃ© o inÃ­cio
      rewind(arquivo);
      //Atualizando registros
      fwrite(registros, sizeof(registro), (tamanhoArquivo/sizeof(registro)), arquivo);
      printf("AlteraÃ§Ã£o realizada com sucesso!\n");
    }else {
      printf("Registro nÃ£o encontrado!\n");
    }
    //Fechando o arquivo e desalocando a memoria do array
    free(registros);
    fclose(arquivo);
  }else {
    printf("O arquivo digitado nÃ£o existe!\n");
  }
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

//Imprimir Registros
void imprimirRegistros() {
  system("@cls||clear");
  //Entrando no arquivo
  char nomeArquivo[100];
  FILE *arquivo;
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  arquivo = fopen(nomeArquivo, "rb");
  if(arquivo != NULL) {
    //Tamanho do Arquivo
    fseek(arquivo, 0L, SEEK_END);
    long int tamanhoArquivo= ftell(arquivo);
    //Retornando o curso atÃ© o inÃ­cio
    rewind(arquivo);
    //Alocando array de registros
    registro *registros = malloc(tamanhoArquivo);
    //Atribuindo os registros ao array
    fread(registros, sizeof(registro), tamanhoArquivo/sizeof(registro), arquivo);
    for(int i = 0; i < tamanhoArquivo/sizeof(registro); i++) {
      printf("Registro nÂ°%i\n", i+1);
      printf("Id do vendendor: %i\n", registros[i].codigoVendedor);
      printf("Nome do vendendor: %s\n", registros[i].nomeVendedor);
      printf("Valor: %.2lf\n", registros[i].valor);
      printf("MÃªs: %i\n", registros[i].mes);
    }
    //Fechando o arquivo e desalocando a memoria do array
    free(registros);
    fclose(arquivo);
  }else {
    printf("O arquivo digitado nÃ£o existe!\n");
  }
  
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

// Finalizar programa
void finalizarPrograma() {
  system("@cls||clear");
  printf("Programa Finalizado!");
}

// AÃ§Ãµes InvÃ¡lida
void acaoErro() {
  system("@cls||clear");
  printf("AÃ§Ã£o digitada Ã© invÃ¡lida!\n");
  //Pause
  getchar();
  printf("\nPressione qualquer tecla para continuar!");
  getchar();
}

//FunÃ§Ã£o main
int main() {
  // CriaÃ§Ã£o da variavel de controle
  int acao;
  //Limpando a tela
  system("@cls||clear");
  do {
    menu(&acao);
    //Verificando se a aÃ§Ã£o Ã© vÃ¡lida
    switch(acao) {
      //Criar arquivo de dados
      case 1:
        criarArquivo();
      break;
      //Excluir arquivo de dados
      case 2:
        excluirArquivo();
      break;
      //Adicionar novo registo
      case 3:
        adicionarRegistro();
      break;
      //Excluir vendedor
      case 4:
        excluirVendedor();
      break;
      //Alterar valor de venda
      case 5:
        alterarVenda();
      break;
      //Imprimir registros
      case 6:
        imprimirRegistros();
      break;
      //Finalizar o programa
      case 7:
        finalizarPrograma();
      break;
      //Tratando as aÃ§Ãµes nÃ£o vÃ¡ldias
      default:
        acaoErro();
      break;
    }
    
  }while(acao != 7);
}
