## Arquivos Parte 3
PS: Certifique-se de voltar a branch main(default) após sair da questão linkada nos títulos.
### [Exercício 21](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e21.c)

Crie um programa que receba como entrada o número de alunos de uma disciplina. Aloque dinamicamente em uma estrutura para armazenar as informações a respeito desses alunos: nome do aluno e sua nota ﬁnal. Use nomes com no máximo 40 caracteres. Em seguida, salve os dados dos alunos em um arquivo binário. Por ﬁm, leia o arquivo e mostre o nome do aluno com a maior nota.

### [Exercício 22](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e22.c)

Faça um programa que recebe como entrada o nome de um arquivo de entrada e o nome de um arquivo de saída. O arquivo de entrada contém o nome de um aluno ocupando 40 caracteres e três inteiros que indicam suas notas. O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde aparece o nome do aluno e as suas notas em ordem crescente.

### [Exercício 23](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e23.c)

Escreva um programa que leia a proﬁssão e o tempo de serviço (em anos) de cada um dos 5 funcionários de uma empresa e armazene-os no arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um funcionário. Utilize o comando fprintf(). Em seguida, leia o mesmo arquivo utilizando fscanf(). Apresente os dados na tela.

### [Exercício 24](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e24.c)

Implemente um controle simples de mercadorias em uma despensa doméstica. Para cada produto armazene um código numérico, descrição e quantidade atual. O programa deve ter opções para entrada e retirada de produtos, bem como um relatório geral e um de produtos não disponíveis. Armazene os dados em arquivo binário.

### Exercício 25

Faça um programa gerenciar uma agenda de contatos. Para cada contato armazene o nome, o telefone e o aniversário (dia e mês). O programa deve permitir<br>

- (a) inserir contato<br>
- (b) remover contato<br>
- (c) pesquisar um contato pelo nome<br>
- (d) listar todos os contatos<br>
- (e) listar os contatos cujo nome inicia com uma dada letra<br>
- (f) imprimir os aniversariantes do mês.<br>
  Sempre que o programa for encerrado, os contatos devem ser armazenados em um arquivo binário. Quando o programa iniciar, os contatos devem ser inicializados com os dados contidos neste arquivo binário.<br>

### [Exercício 26](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e26.c)

Crie um programa que declare uma estrutura para o cadastro de alunos.

- (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um), e ano de nascimento.
- (b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados.
- (c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos.
- (d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
- (e) Em seguida, essas informações deverão ser gravadas em um arquivo.
- (f) Ao ﬁnal, mostrar os dados armazenados e liberar a memória alocada.<br>
  Ao iniciar o programa, forneça ao usuário uma opção para carregar os registros do arquivo para a memória do computador alocando dinamicamente a quantidade de memória necessária.<br>

Dica: para que o usuário possa entrar com novos dados, além dos que foram obtidos a partir do arquivo, use a função realloc() para realocar a quantidade de memória usada.

### Exercício 27

Faça um programa para gerenciar as notas dos alunos de uma turma salva em um arquivo. O programa deverá ter um menu contendo as seguintes opções:
(a) Deﬁnir informações da turma;
(b) Inserir aluno e notas;
(c) Exibir alunos e médias;
(d) Exibir alunos aprovados;
(e) Exibir alunos reprovados;
(f) Salvar dados em Disco;
(g) Sair do programa (ﬁm).
Faça a rotina que gerencia o menu dentro do main, e para cada uma das opções deste menu, crie uma função especíﬁca.

### [Exercício 28](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e28.c)

Faça um programa que recebe como entrada o nome de um arquivo de entrada e o nome de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de tamanho de 30 caracteres. No arquivo de saída deverá ser escrito o arquivo de entrada de forma inversa. Veja um exemplo:
Arquivo de entrada:
Hoje é dia de prova de LP1
A prova está muito fácil
Vou tirar uma boa nota
Arquivo de saída:
Aton aob amu rarit uov
Licáf otium átse avorp A
1PL ed avorp ed aid é ejoH

### [Exercício 29](https://github.com/LucasDSL/MATA57-LAB1/blob/b0784cdfd8151f7209b0ae8ac8c2bb854db1b3a0/11%20Arquivos%203/e29.c)

Codiﬁque um programa que manipule um arquivo contendo registros descritos pelos seguintes campos: código vendedor, nome vendedor, valor da venda e mês. A manipulação do arquivo em questão é feita através da execução das operações disponibilizadas pelo seguinte menu:<br>

- Criar o arquivo de dados;
- Incluir um determinado registro no arquivo;
- Excluir um determinado vendedor no arquivo;
- Alterar o valor de uma venda no arquivo;
- Imprimir os registros na saída padrão;
- Excluir o arquivo de dados;
- Finalizar o programa.<br>
  Os registros devem estar ordenados no arquivo, de forma crescente, de acordo com as informações contidas nos campos código vendedor e mês. Não deve existir mais de um registro no arquivo com mesmos valores nos campos código vendedor e mês.
