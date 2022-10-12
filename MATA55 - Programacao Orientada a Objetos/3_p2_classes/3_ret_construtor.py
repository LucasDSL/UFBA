'''
Perceba que, se você consultar a área de um retângulo sem antes definir suas medidas, ocorre um erro. Exemplo:

r = Retangulo()
print(r.area())
# Resultado: "AttributeError: 'Retangulo' object has no attribute 'base'"
Para evitar esse problema, você deve criar um construtor/inicializador.

Copie sua solução do exercício anterior e cole aqui, fazendo uma modificação: defina a classe Retangulo de forma que, para instanciar um objeto, é necessário informar base e altura.'''
class Retangulo:
  '''Representa um retângulo, com base e altura'''
  def __init__(self, base, altura): 
    self.base = base 
    self.altura = altura 
    
  def altera_dimensoes(self, b, a):
    '''
    Altera base e altura para os
    valores fornecidos como parâmetro
    '''
    self.base = b 
    self.altura = a 
    
  def area(self):
    return self.base * self.altura 
  def perimetro(self): 
    return self.base * 2 + self.altura * 2

### Testes
r = Retangulo(3, 4)
assert r.area() == 12
r.base = 5
assert r.area() == 20