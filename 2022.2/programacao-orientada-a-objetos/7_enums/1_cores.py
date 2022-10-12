'''
Cores e componentes
Uma cor é formada por três componentes (r, g e b, ou vermelho, verde e azul), variando de 0 a 255, e é representada pela classe Cor.

Crie a enumeração Componente, tendo como membros RED, GREEN e BLUE, e então implemente o método altera da classe Cor, que altera um dos componentes da cor atual.'''
from enum import Enum

class Componente(Enum):
  RED=1
  GREEN=2
  BLUE=3

class Cor:
  def __init__(self, r, g, b):
    self.r = r
    self.g = g
    self.b = b
    
  
  
  def altera(self, componente, valor):
    if componente == Componente.RED: 
        self.r = valor 
    elif componente == Componente.BLUE: 
        self.b = valor 
    elif componente == Componente.GREEN: 
        self.g = valor 

  def __eq__(self, o):
    return self.r == o.r and self.g == o.g and self.b == o.b

### Testes
c = Cor(1, 2, 3)
c.altera(Componente.RED, 128)
assert c.r == 128 and c.g == 2 and c.b == 3

c = Cor(1, 2, 3)
c.altera(Componente.GREEN, 100)
assert c.r == 1 and c.g == 100 and c.b == 3

c = Cor(1, 2, 3)
c.altera(Componente.BLUE, 255)
assert c.r == 1 and c.g == 2 and c.b == 255

assert isinstance(Componente.RED, Enum)