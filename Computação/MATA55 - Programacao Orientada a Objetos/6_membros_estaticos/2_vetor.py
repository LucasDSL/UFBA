'''
Um vetor em duas dimensões é um segmento de reta orientado, que pode ser representado por duas coordenadas, x e y. Um vetor também pode ser determinado por um ângulo (θ) e um tamanho (t), através das seguintes relações:

x = t * cos(θ)
y = t * sen(θ)
A classe Vetor representa um vetor com coordenadas x e y. Para conveniência dos clientes da classe, crie os seguintes métodos estáticos:

comAnguloETamanho(θ, t): retorna um novo vetor, com ângulo θ (em radianos) e tamanho t
vertical(t): retorna um vetor sobre o eixo y com tamanho t
horizontal(t): retorna um vetor sobre o eixo x com tamanho t'''
import math

class Vetor:
  def __init__(self, x, y):
    self.x = x
    self.y = y
  
  def __eq__(self, o):
    return abs(self.x - o.x) < 0.001 and abs(self.y - o.y) < 0.001
  
  def comAnguloETamanho(tetha, te): 
    return Vetor(te * math.cos(tetha), te * math.sin(tetha))

  def vertical(te):
    return Vetor(0, te)

  def horizontal(te):
    return Vetor(te, 0)

assert Vetor.comAnguloETamanho(math.pi / 3, 10) == Vetor(5, 8.66025)
assert Vetor.comAnguloETamanho(math.pi, 10) == Vetor.horizontal(-10)
assert Vetor.vertical(5) == Vetor(0, 5)
assert Vetor.horizontal(-3) == Vetor(-3, 0)