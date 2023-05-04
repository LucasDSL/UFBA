'''Parâmetros default
Implemente a função segundo_grau(x, a, b, c), que retorna o resultado da expressão ax² + bx + c. Considere que os parâmetros b e c são opcionais e, se não forem passados, são iguais a 0.'''
def segundo_grau(x, a, b=0, c=0):
  termo = a * x * x
  return termo + b * x + c

### Testes
assert segundo_grau(2, 1, 1, 1) == 7
assert segundo_grau(3, 4, -2) == segundo_grau(3, 4, -2, 0)
assert segundo_grau(-2, 7) == segundo_grau(-2, 7, 0, 0)
assert segundo_grau(-2, 7, c=8) == segundo_grau(-2, 7, 0, 8)