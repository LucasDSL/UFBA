'''
Implemente o método aumenta conforme a documentação. Consulte os testes para ver um exemplo de como o método é chamado e qual o resultado esperado.'''
class Retangulo:
  def __init__(self, base, altura):
    self.base = base
    self.altura = altura
  def aumenta(self, outro):
    '''
    Redimensiona este retângulo, cujas dimensões
    passam a ser a soma das suas dimensões originais
    com as dimensões de outro retângulo, passado
    como parâmetro
    '''
    self.altura += outro.altura 
    self.base += outro.base 

### Testes
r1 = Retangulo(4, 5)
r2 = Retangulo(1, 2)
r1.aumenta(r2)
assert r1.base == 5 and r1.altura == 7
assert r2.base == 1 and r2.altura == 2