## Funções Recursivas - Parte 1

PS: Certifique-se de voltar a branch main(default) após sair da questão linkada nos títulos.

### [Exercício 1](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e1.c)

Crie uma função recursiva que receba um número inteiro n como parâmetro e retorne o soma dos números de 1 a n.

### [Exercício 2](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e2.c)

Crie uma função recursiva que receba dois números inteiros n e m como parâmetro e retorne o soma dos números do intervalo [n, m].

### [Exercício 3](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e3.c)

[adaptado de Paes (2016)]. Crie uma função recursiva que encontre o fatorial de um número. Lembre que: fatorial(0) = 1; fatorial(n) = n \* fatorial(n -1), para n > 0.

### [Exercício 4](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e4.c)

[adaptado de Paes (2016)]. Crie uma função para calcular, de forma recursiva, a soma dos elementos de um vetor. A função deve ter a seguinte assinatura:<br>

- int soma(int vetor[], int pos, int tam)<br>

Obs: pos e tam representam a posição inicial na qual a soma será realizada e o tamanho do vetor, respectivamente. [atualizado em 15/09/2021]

### [Exercício 5](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e5.c)

[adaptado de Paes (2016)]. Faça uma função recursiva que encontre um determinado número em um vetor e retorne o índice de onde ele foi encontrado. A função deve ter a seguinte assinatura:<br>

- int procurar(int vetor[], int tam, int indice, int num);

### [Exercício 6](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e6.cpp)

[adaptado de Paes (2016)]. Faça uma função recursiva que receba um vetor como parâmetro e retorne o seu maior elemento. A função deve ter a seguinte assinatura:<br>

- int maior(int vetor[], int tam, int indice)

### [Exercício 7](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e7.c)

[adaptado de Paes (2016)]. Escreva uma função recursiva que receba dois números reais e retorne a multiplicação entre eles. Não utilize o operador de multiplicação nem repetições.

### [Exercício 8](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e8.c)

[adaptado de Paes (2016)]. Escreva uma função recursiva que receba uma string e o tamanho dessa string como parâmetro e retorne a mesma string com os caracteres na ordem contrária. Nesse caso, o retorno deve ser realizado alternado a própria string recebida com parâmetro.<br>

- void inverter(char s[], int pos, int len);<br>

Obs: len representa o tamanho do vetor. [atualizado em 17/09/2021]

### [Exercício 9](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/03%20Recursivas%201/e9.c)

Escreva uma função recursiva que receba dois número inteiros como parâmetro e retorne o máximo divisor comun entre eles (MDC).
