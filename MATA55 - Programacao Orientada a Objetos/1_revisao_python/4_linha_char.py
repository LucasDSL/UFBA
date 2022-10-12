'''Linha de caracteres
Crie uma função que recebe um caractere e um número inteiro, N, e retorna uma string consistindo do caractere repetido N vezes.'''

def linha(c, n):
    if n <= 0: return ""
    return c * n

assert linha("*", 5) == "*****"
assert linha("#", 2) == "##"
assert linha("@", 0) == ""