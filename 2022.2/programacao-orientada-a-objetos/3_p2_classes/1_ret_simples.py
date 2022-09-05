'''Defina uma classe Retangulo, com um método, 
altera_dimensoes, que recebe dois números; o método 
atribui o primeiro número ao atributo base do objeto 
e o segundo número ao atributo altura'''
class Retangulo:
  '''Representa um retângulo, com base e altura'''
  def altera_dimensoes(self, b, a):
    self.base = b 
    self.altura = a

### Testes
r = Retangulo()
r.altera_dimensoes(23, 76)
assert r.base == 23
assert r.altura == 76