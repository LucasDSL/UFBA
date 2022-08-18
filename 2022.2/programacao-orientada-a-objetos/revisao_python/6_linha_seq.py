'''Lista sequencial
Crie uma função que recebe um número inteiro, N e retorna uma lista com todos os números inteiros de 1 a N, em ordem crescente. Se N for zero ou negativo, deve ser retornada uma lista vazia.'''

def sequencia(n):
    if n<= 0: return []
    return [i for i in range(1, n+1)]
assert sequencia(3) == [1, 2, 3]
assert sequencia(1) == [1]
assert sequencia(-1) == []