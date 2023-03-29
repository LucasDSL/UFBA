## Alocação Dinâmica

PS: Certifique-se de voltar a branch main(default) após sair da questão linkada nos títulos.

### [Exercício 01](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e1.c)

Crie um programa que:

- (a) Aloque dinamicamente um vetor de 5 números inteiros;
- (b) Peça para o usuário digitar os 5 números no espaço alocado;
- (c) Mostre na tela os 5 números;
- (d) Libere a memória alocada.

### [Exercício 02](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e2.c)

Faça um programa que leia do usuário o tamanho de um vetor e faça a alocação dinâmica de memória para esse vetor. Em seguida, leia do usuário os valores, armazene no vetor e imprima os valores armazenados no vetor

### [Exercício 03](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e3.c)

Faça um programa que leia do usuário o tamanho de um vetor, faça a alocação dinâmica de memória para esse vetor e leia do usuário os valores para preencher o vetor. Em seguida, percorra o vetor preenchido e mostre quantos dos números são pares e quantos são impares.

### [Exercício 04](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e4.c)

Faça um programa que receba do usuário o tamanho de uma string e chame uma
função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir a string sem suas vogais.

### [Exercício 05](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e5.c)

Faça um programa que:

- leia um número N;
- Crie dinamicamente e leia um vetor de inteiro de N posições;
- Leia um numero inteiro X e conte e mostre os múltiplos desse número que existem no vetor.

### [Exercício 06](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e6.c)

Faça um programa que simule a memória de um computador: o usuário irá especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 02 opções: inserir um valor em uma determinada posição ou consultar o valor contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.

### [Exercício 07](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e7.c)

Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete. O programa então verifica quantos números o jogador acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os seus números corretos.

### [Exercício 08](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e8.c)

Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:

- (a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).

- (b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor.

- (c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.

### [Exercício 09](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e9.c)

Faça um programa que leia uma quantidade qualquer de números armazenando-os na memoria e pare a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função REALLOC.

### [Exercício 10](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e10.c)

Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios entre 0 e 100 (usando a função rand). Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.

### [Exercício 11](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e11.c)

Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.

- (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento.
- (b) Ao iniciar o programa, o usuario deverá informar o número de alunos que serão armazenados.
- (c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos.
- (d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
- (e) Ao final, mostrar os dados armazenados e liberar a memoria alocada.

### [Exercício 12](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e12.c)

Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto: Código de identificação do produto - representado por um valor inteiro; Nome do produto - com até 50 caracteres; Quantidade disponível no estoque - representado por um número inteiro; Preço de venda - representado por um valor real.

- (a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto
- (b) Crie um conjunto de N produtos (N e um valor fornecido pelo usuário) e peça ao usuário para entrar com as informações de cada produto
- (c) Encontre o produto com o maior preço de venda
- (d) Encontre o produto com a maior quantidade disponível no estoque

### [Exercício 13](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e13.c)

Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que receba um valor e: retorne 1, caso o valor esteja na matriz; ou retorne 0, caso não esteja na matriz.

### [Exercício 14](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e14.c)

Construa um programa que leia o número de linhas e de colunas de uma matriz de números reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo usuário. Ao final, o programa deverá retornar a matriz na saída padrão com layout apropriado

### [Exercício 15](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e15.c)

Faça um programa que leia dois números N e M e: crie e leia uma matriz de inteiros N x M; localize os três maiores números de uma matriz; e mostre a linha e a coluna onde estão.

### [Exercício 16](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e16.c)

Faça um programa que leia dois números N e M: crie e leia uma matriz N x M de inteiros; crie e construa uma matriz transposta M x N de inteiros; e mostre as duas matrizes.

### [Exercício 17](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e17.c)

Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, caso deseje encerrar a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória da seguinte forma:

- Inicie com um vetor de tamanho 10 alocado dinamicamente;
- Quando o vetor alocado estiver cheio, aloque um novo vetor do tamanho do vetor anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);
- Copie os valores já digitados da área inicial para está área maior e libere a memória da área inicial;
- Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser "expandido" de 10 em 10 valores.
- Ao final, exiba o vetor lido. Não use a função REALLOC.

### [Exercício 18](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e18.c)

Escreva um programa para fazer a alocação dinâmica dos blocos de dados conforme solicitado abaixo:

- (a) Vetor de 1024 Bytes (1 Kbyte).

- (b) Matriz de inteiros de dimensão 10 x 10.

- (c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código do produto (inteiro) e preço em reais.

- (d) Texto de até 100 linhas com até 80 caracteres em cada linha.

### [Exercício 19](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e19.c)

Faça um programa para associar nomes as linhas de uma matriz de caracteres. O usuário irá informar o número máximo de nomes que poderão ser armazenados. Cada nome poderá ter até 30 caracteres com o ’\0’ no final. O usuário poderá usar 5 opções diferentes para manipular a matriz:

- (a) Gravar um nome em uma linha da matriz;
- (b) Apagar o nome contido em uma linha da matriz;
- (c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
- (d) Informar um nome, procurar a linha onde ele se encontra e apagar;
- (e) Pedir para recuperar o nome contido em uma linha da matriz;

### [Exercício 20](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e20.c)

Faça um programa que:

- (a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N é informado pelo usuário);
- (b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
- (c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
- (d) Exiba na tela a matriz de distâncias obtida;
- (e) Quando o usuário digitar o número de duas cidades o programa deverá retornar a distância entre elas.

### [Exercício 21](https://github.com/LucasDSL/MATA57-LAB1/blob/f0dc6444aeccf14f6e203fcc5fd515085e4d84af/08%20Aloca%C3%A7%C3%A3o%20Din%C3%A2mica/e21.c)

Faça um programa que leia quatro números a, b, c e d, que serão as dimensões de duas matrizes, e:

- Crie e leia uma matriz, dadas as dimensões dela;

- Crie e construa uma matriz que seja o produto de duas matrizes.
  <br>
  Na sua função main(), imprima as duas matrizes e o produto entre elas, se existir.
