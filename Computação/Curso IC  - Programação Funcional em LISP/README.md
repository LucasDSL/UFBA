## Tomorrow - Programação Funcional em LISP
[2023.1 - 30H] [Prof. Manoel Mendonça](http://lattes.cnpq.br/1608062196337851)

> Ementa: Expressões, valores, funções e tipos. Avaliação de expressões, redução e conversão (estrita e preguiçosa).  Programação com listas. Recursividade de cauda. Escopos e ambientes. Polimorfismo e funções de alta ordem. Equivalência dado-programa. Revisitando tipos de dados, estruturas de controle e processamento de exceções. Iterações e compreensões. Módulos e tipos abstratos de dados.

Objetivos Específicos:
- Entender conceitos básicos de programação funcional, utilizando recursividade, e evitando estado e mutabilidade;
- Compreender construções básicas em LISP, Scheme e Racket;
- Atingir proficiência de programação em LISP;
- Entender redução e conversão de expressões e formas sintáticas;
- Ser capaz de aplicar padrões básicos de projeto utilizando funções recursivas;
- Entender e saber utilizar polimorfismo, funções de alta ordem e equivalência dado programa em programação funcional;

Principais ferramentas: 
- [IDE DrRacket ](https://docs.racket-lang.org/drracket/)
- [Linguagem Racket](https://racket-lang.org/)
### Aula 1 - 27/05/2023
Foram abordados diversos conceitos sobre a linguagem LISP, desde sua histório até definições de funções lambda e 
recursão de cauda, e dobra da direita pra esquerda. Também foi explicados sobre funcionamentos de programas em 
LISP como atom, pairs e lists e suas relações de localização de memória. Ao longo do dia implementamos diversos programas que aplicavam alguns desses conhecimento, sendo focado mais na parte de recursão, ainda que sempre
utilizando conhecimentos mais básicos anteriores como definições e operações básicas e implementações do próprio racket (dialeto LISP utilizado para a parte prática).
### Aula 2 - 03/06/2023
Aprendemos sobre recursividade profunda, onde podem ser percorridas listas
dentro de listas, através tanto da profundidade quanto da largura da 
lista principal. Assim trabalhamos bastante com esse conceito através de
listas genéricas (com profundida). Conversando com um colega aprendi sobre 
o rackunit, biblioteca para testes de funções, que passei a utilizar
rapidamento, como pode ser visto no arquivo das funções do dia. Por último
aprendemos sobre funções com parâmetros padrão, declarações de variáveis e
funções com argumentos nomeados e procedimentos.