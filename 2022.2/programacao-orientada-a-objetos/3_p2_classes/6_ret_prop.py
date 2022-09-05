'''
Defina a classe Retangulo com dois atributos, base e altura (inicializados durante a criação do objeto), e uma propriedade, area, que é computada a partir dos dois atributos mas não pode ser alterada.'''
class Retangulo:
  def __init__(self, base, altura):
    self.base = base
    self.altura = altura
    self.razao = base / altura 
    
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