//Feita por Iasmim da Cruz Marinho
// inserir um valor em uma determinada posição ou consultar o valor

#include <stdio.h>
#include <stdlib.h>

typedef struct memoria{
  int tamanho;
  int conteudo;
  int pos;
}memoria;

//assinaturas
void inicializarMemoria(memoria* m);
void menu(memoria* m);
void inserirPos(memoria* m, int p, int v);
void consultarPos(memoria* m, int p);

int main(void) {

  int tam, op, p,v;
  
  printf("Tamanho da memória: ");
  scanf("%d", &tam);

    //aloca espaço na memória de tamanho informado
    memoria* m = (memoria *) malloc (sizeof(memoria) * tam);
    m -> tamanho = tam;
    
    //inicializar memoria
    inicializarMemoria(m);
    
    //menu 
    menu(m);
    free(m);
  
  

  return EXIT_SUCCESS;

}
//menu 
void menu(memoria* m){

  int op, p,v;

  do{
    printf("O que deseja fazer?\n 1 - inserir valor\n 2 - consultar valor\n 3 - sair\n");
    scanf("%d", &op);

    if(op == 1){
      printf("Informe posição que deseja inserir: ");
      scanf("%d", &p);
      printf("Informe valor: " );
      scanf("%d", &v);

      inserirPos(m,p,v);
    }
    if(op == 2){
      printf("Informe posição que deseja consultar: ");
      scanf("%d", &p);

      consultarPos(m,p);

    } 
    if(op == 3){
      printf("Finalizado!");
    }
  }while(op != 3);
}
//inicializa memoria
void inicializarMemoria(memoria* m){
for(int i = 0; i < m->tamanho; i++){
    m[i].conteudo = 0;
    m[i].pos = 0;
    printf("[%d]: %d\n", i, m[i].conteudo);
  }
}
//inserir valor
void inserirPos(memoria* m, int p, int v){
  if(m[p].conteudo == 0){
     m[p].conteudo = v;
  }else{
    printf("posição ocupada\n");
  }
      
}
//consultar posicao
void consultarPos(memoria* m, int p){
  if(p>=0 && p<=2){
    if(m[p].conteudo != 0){
      printf("[%d]: %d \n", p, m[p].conteudo);
    }else{
      printf("vazio\n");
    }
  }else{
      printf("invalido\n");
    }
      
}
