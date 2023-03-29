'''
Continuando o exercício anterior, implemente dois métodos adicionais:

area: retorna a área do retângulo
perimetro: retorna o perímetro do retângulo'''
class Retangulo:
  '''Representa um retângulo, com base e altura'''
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
r = Retangulo()
r.base = 4
r.altura = 3
assert r.area() == 12
assert r.perimetro() == 14
r.base = 5
assert r.area() == 15
assert r.perimetro() == 16
