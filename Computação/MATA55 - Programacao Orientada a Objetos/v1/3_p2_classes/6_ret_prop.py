'''
Defina a classe Retangulo com dois atributos, base e altura (inicializados durante a criação do objeto), e uma propriedade, area, que é computada a partir dos dois atributos mas não pode ser alterada.'''
class Retangulo:
  def __init__(self, base, altura):
    self._base = base
    self._altura = altura

  def get_base(self):
    return self._base 
  def set_base(self, new_base):
    self._base = new_base
	
  def get_altura(self):
    return self._altura
  def set_altura(self, value):
    self._altura = value

  def get_area(self): 
    return self._base * self._altura

  base = property(get_base, set_base)
  altura = property(get_altura, set_altura)
  area = property(get_area, None)

### Testes
r1 = Retangulo(3, 4)
assert r1.area == 12

r1.base = 5
r1.altura = 3
assert r1.area == 15

houve_excecao = False
try:
  r1.area = 10
except AttributeError as e:
  houve_excecao = True
assert houve_excecao