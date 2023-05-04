'''Implemente o método aumenta conforme a documentação. Consulte os testes para ver um exemplo de como o método é chamado e qual o resultado esperado.'''
class Retangulo:
  def __init__(self, base, altura):
    self.base = base
    self.altura = altura
  def mais(self, outro):
    '''
    Cria um novo retângulo, cujas dimensões são
    a soma das dimensões deste retângulo com as
    dimensões de outro retângulo, passado como
    parâmetro
    '''
    new_rec_base = self.base + outro.base 
    new_rec_altura = self.altura + outro.altura 
    return Retangulo(new_rec_base, new_rec_altura)

### Testes
r1 = Retangulo(4, 5)
r2 = Retangulo(1, 2)
r3 = r1.mais(r2)
assert r1.base == 4 and r1.altura == 5
assert r2.base == 1 and r2.altura == 2
assert r3.base == 5 and r3.altura == 7