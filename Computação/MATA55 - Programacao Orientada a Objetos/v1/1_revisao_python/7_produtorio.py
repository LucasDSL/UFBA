'''Produtório
Crie uma função que recebe uma lista de números e retorna o seu produto ou 1 em caso de lista vazia.'''

def produtorio(lista):
    resultado = 1
    for i in lista: 
        resultado = resultado * i
    return resultado

assert produtorio([]) == 1
assert produtorio([1, 2, 3]) == 6
assert produtorio([1, 0, 3]) == 0