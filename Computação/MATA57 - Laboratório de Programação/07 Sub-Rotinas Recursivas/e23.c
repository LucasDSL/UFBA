#include<stdio.h>
#include<stdlib.h>
int main(int count){
    int count2 = count + 1;
    printf("%d\n", count2);
    main(count2);
}
// O programa printa o valor que foi passado até um valor próximo de quarenta mil(aproximadamente)
// caso não haja um limite no qual o count pode atingir. Segundo minhas pesquisas no C isso é permitido 
// embora seja um péssima prática, enquanto no C++ isso nem se quer é permitido.