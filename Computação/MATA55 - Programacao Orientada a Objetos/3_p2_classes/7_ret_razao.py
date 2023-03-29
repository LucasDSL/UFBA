'''
Defina a classe Retangulo com dois atributos, base e altura (inicializados durante a criação do objeto), e uma propriedade, razao, que indica a razão base / altura. Além disso, deve ser possível alterar a razão de um retângulo; nesse caso, a altura é alterada para refletir a nova razão.

Por exemplo, um retângulo de 10x5 possui razão 2. Se alterarmos a razão para 4, o retângulo passará a ter dimensões 10x2.5.'''
class Retangulo:
  def __init__(self, base, altura):
    self._base = base
    self._altura = altura
    self._razao = base / altura
	
  def get_razao(self):
    return self._base / self._altura
  def set_razao(self, new_razao):
    propo = new_razao / self._razao
    self._altura /= propo
    self._razao = new_razao
  
  def get_base(self):
    return self._base 
  def set_base(self, new_base):
    self._base = new_base
    self._razao = self._base / self._altura
	
  def get_altura(self):
    return self._altura
  def set_altura(self, value):
    self._altura = value

  razao = property(get_razao, set_razao) 
  base = property(get_base, set_base)
  altura = property(get_altura, set_altura)

### Testes
r = Retangulo(10, 5)
assert r.razao == 2
r.base = 20
assert r.razao == 4
r.razao = 1
assert r.base == 20 and r.altura == 20
r.razao = 0.5
assert r.base == 20 and r.altura == 40