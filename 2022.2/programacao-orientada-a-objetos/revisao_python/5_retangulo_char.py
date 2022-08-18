'''Retângulo desenhado
Crie uma função que recebe um caractere e dois inteiros, base e altura, e retorna uma string representando um retângulo com as dimensões fornecidas. Use a função linha desenvolvida anteriormente (você precisará copiar a função aqui).'''

def retangulo(c, base, altura):
  if c == "" or base <= 0 or altura <= 0: 
    return ""
  
  base = c * base + "\n"
  return base * altura

assert retangulo("*", 4, 2) == "****\n****\n"
assert retangulo("#", 5, 1) == "#####\n"