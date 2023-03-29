// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>
// Estrutura  do usuário 
typedef struct user{
    int idade;
    char nome[50];
    char sexo;
    char estado_civil;
    int num_amigos;
    int num_fotos;
} User;
void cadastrar_novos_usuarios(User *, int, int);
void imprimir_relatorio(User *, int, char);
void getInfo(User *);

int main(){
    int opcao, actual_quantity_users = 0;
    User *list_users = (User *) malloc(0);
    while(1){
        printf("Qual operaçao deseja realizar?\n");
        printf("1 - Cadastrar novo usuário\n");
        printf("2 - Imprimir relatorio especifico\n");
        printf("Digite outro numero para sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Quantos usuarios deseja cadastrar? ");
            int num_users, num_users_before = actual_quantity_users;            
            scanf("%d", &num_users);
            actual_quantity_users += num_users;
            list_users = (User *) realloc(list_users, sizeof(User) * actual_quantity_users);
            cadastrar_novos_usuarios(list_users, num_users_before, actual_quantity_users);
            break;
        case 2:
            printf("Digite a letra correspondente à opção:\n");
            char temp;
            scanf("%c", &temp);
            char opcao_char;
            printf("a - imprimir todos os usuarios cadastrados\n");
            printf("b - imprimir todos os usuarios menores de 18 anos\n");
            printf("c - imprimir todos os usuarios maiores de 18 anos\n");
            printf("d - imprimir todos os usuarios solteiros\n");
            printf("e - imprimir todos os usuarios solteiros de determinado sexo\n");
            printf("f - imprimir todos os usuarios casados\n");
            printf("g - imprimir todos os usuarios namorando\n");
            scanf("%c", &opcao_char);
            imprimir_relatorio(list_users, actual_quantity_users, opcao_char);
            break;
        default:
            printf("Opcao invalida!\n");
            return EXIT_FAILURE;
            break;
        }
    }
}

void cadastrar_novos_usuarios(User *list_users, int users_before, int users_after){
    int i = users_before;
    char temp;
    for(i; i < users_after; i++){
        printf("Cadastro do usuario N%d\n", i+1);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &(list_users+i)->idade);
        scanf("%c", &temp);
        printf("Digite o nome da pessoa: ");
        char nome_cadastro[50];
        scanf(" %[^\n]", &nome_cadastro);
        int j = 0;
        for(j; j < sizeof(nome_cadastro)/sizeof(char); j++){
            (list_users+i)->nome[j] = nome_cadastro[j];
        }
        scanf("%c", &temp);
        printf("Digite o sexo da pessoa(M/F): ");
        scanf("%c", &(list_users+i)->sexo);
        scanf("%c", &temp);
        printf("Digite o estado civil da pessoa:\nS - Solteiro\nC - Casado\nD - Divorciado\n N - Namorando\n");
        scanf("%c", &(list_users+i)->estado_civil);
        printf("Quantos amigos essa pessoa possue: ");
        scanf(" %d", &(list_users+i)->num_amigos);
        printf("Numero de fotos no perfil da pessoa:");
        scanf(" %d", &(list_users+i)->num_fotos);    
    }
    printf("Usuários cadastrados com sucesso!\n");
    return;
}
void getInfo(User *user){
    printf("Nome: %s\n", user->nome);
    printf("Idade: %d\n", user->idade);
    printf("Sexo: %c\n", user->sexo);
    switch (user->estado_civil)
    {
    case 'S':
        printf("Estado Civil: Solteiro(a)\n");
        break;
    case 'C':
        printf("Estado civil: Casado(a)\n");
        break;
    case 'D':
        printf("Estado civil: Divorciado\n");
        break;
    case 'N':
        printf("Estado civil: Namorando\n");
        break;
    default:
        printf("Estado civil não cadastrado!\n");
        break;  
    }
    printf("Número de amigos: %d\n", user->num_amigos);
    printf("Número de fotos postadas: %d\n", user->num_fotos);
    return;
}

void imprimir_relatorio(User *list, int amount_users, char option){
    char option_sex, temp;
    if(option == 'e' || option == 'E'){
        printf("Qual o sexo dos usuários solteiros(M/F)? ");
        scanf("%c", &option_sex);
        scanf("%c", &temp);
    }
    int i = 0;
    for(i; i < amount_users; i++){
        switch (option)
        {
        case 'a':
            getInfo(list+i);            
            break;
        case 'b':
            if((list+i)->idade < 18){
                getInfo(list+i);
            }
            break;
        case 'c':
            if((list+i)->idade >= 18){
                getInfo(list+i);
            }
            break;
        case 'd':
            if((list+i)->estado_civil == 'S'){
                getInfo(list+i);
            }
            break;
        case 'e':
            if((list+i)->estado_civil == 'S' && (list+i)->sexo == option_sex){
                getInfo(list+i);
            }
            break;
        case 'f':
            if((list+i)->estado_civil == 'C'){
                getInfo(list+i);
            }
            break;
        case 'g':
            if((list+i)->estado_civil == 'N'){
                getInfo(list+i);
            }
            break;
        default:
            break;
        }
    }
}