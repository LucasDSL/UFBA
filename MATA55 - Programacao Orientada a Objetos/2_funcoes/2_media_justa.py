'''Média justa
Crie uma função uma função maior(lista), que retorna o maior elemento de uma lista de números e uma função media_justa(lista), que retorna a média dos números da lista desconsiderando o seu maior elemento. A segunda função deve usar a primeira.

No caso de uma lista vazia, ambas as funções devem retornar zero.

No caso de uma lista unitária, a função media_justa deve retornar zero.'''
def maior(lista):
  if len(lista) == 0: return 0
  bigger = lista[0]
  for i in range(0, len(lista)): 
    if lista[i] > bigger: 
      bigger = lista[i]
  return bigger

def media_justa(lista):
  if len(lista) == 0 or len(lista) == 1: return 0
  maior_n = maior(lista)
  media = 0
  for n in lista: 
    if n == maior_n: continue 
    media += n
  return media/(len(lista)-1)

### Testes
assert maior([]) == 0
assert maior([4]) == 4
assert maior([3, 5, 2]) == 5
assert maior([8, 3, 5, 2]) == 8
assert maior([8, 3, 5, 9]) == 9

assert media_justa([]) == 0
assert media_justa([6]) == 0
assert media_justa([12, 18]) == 12
assert media_justa([1, 3, 5]) == 2

from unittest.mock import MagicMock
maior = MagicMock(return_value=5)
assert media_justa([5, 10]) == 10
maior.assert_called()