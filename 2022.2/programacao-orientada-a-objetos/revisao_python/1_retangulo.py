'''Retângulo
Crie uma função que recebe como medidas a base e altura de um retângulo e retorna a sua área.

Clique em Rodar para executar seu código.

Se houver algum erro, ele aparecerá no painel à direita. Caso contrário, a saída do seu programa será vazia.

Se quiser visualizar o retorno da função, adicione instruções print no final do programa.

Fique à vontade para criar mais testes usando a instrução assert.'''

def calcula_area(base, altura):
  return base * altura

assert calcula_area(0, 0) == 0
assert calcula_area(3, 4) == 12