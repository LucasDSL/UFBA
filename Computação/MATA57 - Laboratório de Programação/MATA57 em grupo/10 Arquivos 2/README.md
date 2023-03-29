## Arquivos Parte 2

PS: Certifique-se de voltar a branch main(default) após sair da questão linkada nos títulos.

### [Exercício 09](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e9.c)

Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

### [Exercício 10](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e10.c)

Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O arquivo de entrada contém em cada linha o nome de uma cidade (ocupando 40 caracteres) e o seu número de habitantes. O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome da cidade mais populosa seguida pelo seu número de habitantes.

### [Exercício 11](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e11.c)

Faça um programa no qual o usuário informa o nome do arquivo e uma palavra, e retorne o número de vezes que aquela palavra aparece no arquivo.

### [Exercício 12](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e12.c)

Abra um arquivo texto, calcule e escreva o número de caracteres, o número de linhas e o número de palavras neste arquivo. Escreva também quantas vezes cada letra ocorre no arquivo (ignorando letras com acento). Obs.: palavras são separadas por um ou mais caracteres espaço, tabulação ou nova linha.

### [Exercício 13](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e13.c)

Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro, e crie um arquivo com essas informações, uma por linha. O usuário ﬁnaliza a entrada com ‘0’ para o telefone.

### [Exercício 14](#)

Dado um arquivo contendo um conjunto de nome e data de nascimento (DD MM AAAA, isto é, 3 inteiros em sequência), faça um programa que leia o nome do arquivo e a data de hoje e construa outro arquivo contendo o nome e a idade de cada pessoa do primeiro arquivo.

### [Exercício 15](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e15.c)

Faça um programa que receba como entrada o ano corrente e o nome de dois arquivos: um de entrada e outro de saída. Cada linha do arquivo de entrada contém o nome de uma pessoa (ocupando 40 caracteres) e o seu ano de nascimento. O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome da pessoa seguida por uma string que representa a sua idade.<br>

- Se a idade for menor do que 18 anos, escreva “menor de idade”
- Se a idade for maior do que 18 anos, escreva “maior de idade”
- Se a idade for igual a 18 anos, escreva “entrando na maior idade”

### [Exercício 16](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e16.c)

Faça um programa que recebe um vetor de 10 números, converta cada um desses números para binário e grave a sequência de 0s e 1s em um arquivo texto. Cada número deve ser gravado em uma linha.

### [Exercício 17](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e17.c)

Faça um programa que leia um arquivo que contenha as dimensões de uma matriz (linha e coluna), a quantidade de posições que serão anuladas, e as posições a serem anuladas (linha e coluna). O programa lê esse arquivo e, em seguida, produz um novo arquivo com a matriz com as dimensões dadas no arquivo lido, e todas as posições especiﬁcadas no arquivo ZERADAS e o restante recebendo o valor 1.<br>
Ex: arquivo “matriz.txt”<br>
3 3 2 /_3 e 3 dimensões da matriz e 2 posições que serão anuladas_/<br>
1 0<br>
1 2 /\*Posições da matriz que serão anuladas.<br>
arquivo “matriz saida.txt”<br>
saída:<br>
1 1 1<br>
0 1 0<br>
1 1 1<br>

### [Exercício 18](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e18.c)

Faça um programa que leia um arquivo contendo o nome e o preço de diversos produtos (separados por linha), e calcule o total da compra.

### [Exercício 19](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e19.c)

Faça um programa que receba do usuário um arquivo que contenha o nome e a nota de diversos alunos (da seguinte forma: NOME: JOÃO NOTA: 8), um aluno por linha. Mostre na tela o nome e a nota do aluno que possui a maior nota.

### [Exercício 20](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/10%20Arquivos%202/e20.c)

Crie um programa que receba como entrada o número de alunos de uma disciplina. Aloque dinamicamente dois vetores para armazenar as informações a respeito desses alunos. O primeiro vetor contém o nome dos alunos e o segundo contém suas notas ﬁnais. Crie um arquivo que armazene, a cada linha, o nome do aluno e sua nota ﬁnal. Use nomes com no máximo 40 caracteres. Se o nome não contém 40 caracteres, complete com espaço em branco.
