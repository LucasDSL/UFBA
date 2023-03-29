## Sub-Rotinas - Parte 2

PS: Certifique-se de voltar a branch main(default) após sair da questão linkada nos títulos.

### [Exercício 06](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e6.c)

[adaptado de Pereira (2010)]. Crie um programa que solicite ao usuário uma data no formato "dd/mm/aaaa" e exiba na tela a data do dia seguinte, usando o mesmo formato. Na construção desse programa, você considerar a implementação das seguintes subrotinas em C/C++: função dia - recebe como parâmetro uma data no formato "dd/mm/aaaa" e retorna um numero natural representando o dia; função mês - recebe como parâmetro uma data no formato "dd/mm/aaaa" e retorna um numero natural representando o mês; função ano - recebe como parâmetro uma data no formato "dd/mm/aaaa" e retorna um numero natural representando o ano; função dataValida - recebe dia, mês e ano como parâmetro e retorna verdadeiro caso a data seja válida ou falso, caso contrário; procedimento diaSeguinte - recebe, como parâmetro, dia, mês e ano de uma data válida e exibe em tela a data do dia seguinte no formato "dd/mm/aaaa".<br>

### [Exercício 07](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e7.c)

(The Huxley, 2021). Dados 04 números inteiros, implemente um programa C que: calcule o produto entre eles caso os 04 números digitados sejam primos; se algum deles não for primo, imprima que a operação não pode ser realizada. Modularize adequadamente o seu programa com sub-rotinas.<br>

### [Exercício 08](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e8.c)

(Adaptado de The Huxley, 2021). Implemente um programa, em C ou C++, que receba um número inteiro N, nao-negativo, e encontre o mínimo natural tal que o produto de todos os dígitos de Q é igual a N. Se não existir um natural Q que atenda a condição, então o programa deve imprimir que "Problema sem solução". Modularize adequadamente o seu programa com sub-rotinas.

### [Exercício 09](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e9.c)

(The Huxley, 2021). Faça um programa em C ou C++ que leia três valores e apresente o maior dos três valores lidos seguido da mensagem "eh o maior". Utilize a fórmula:
maior(a, b) = ((a + b + abs(a - b)) / 2<br>
Desafio: encontrar o maior sem usar condicionais ("if").<br>

### [Exercício 10](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e10.c)

(The Huxley, 2021). Um belo hotel na praia tem apartamentos especialmente decorados e cobra os valores indicados na tabela a seguir. Com o fim do verão, o movimento caiu e o hotel resolveu oferecer 15% de desconto para hospedagens de 3 ou mais dias. Escreva uma função chamada CalculaHospedagem que receba como parâmetro o tipo de apartamento desejado e a quantidade de diárias, calcule e retorne o valor total a ser pago.<br>

- Tipo de Apartamento / Valor da Diária<br>
- Individual / R$ 125<br>
- Suíte Dupla / R$ 140<br>
- Suíte Tripla / R$ 180<br>

### [Exercício 11](https://github.com/LucasDSL/MATA57-LAB1/blob/baccceeb574cc6d32ca76863c2ba27ab1719af0c/02%20Sub-Rotinas%202/e11.c)

(The Huxley, 2021). Escreva uma função SomaDigitos que receba como entrada um número inteiro e retorne a soma de seus dígitos. Ex.: Se a entrada for 521, a saída será 8 (isto é 5 + 2 + 1).<br>
