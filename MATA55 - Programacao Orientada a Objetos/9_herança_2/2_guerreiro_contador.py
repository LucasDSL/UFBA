'''
Guerreiro e contador: herança vs. composição
Em um jogo de estratégia em tempo real, o jogador controla guerreiros, que 
atacam outros guerreiros até tirar-lhes a vida. A classe Contador implementa um 
contador regressivo. O guerreiro possui uma vida que vai diminuindo à medida 
que é atacado; para isso, a classe Guerreiro estende Contador, de forma a 
aproveitar o código de decrementar contador.

Essa solução possui alguns problemas:

Guerreiro herda o método reseta, que retorna o contador para o seu valor 
inicial; no entanto, no jogo o Guerreiro não pode recuperar sua vida, e 
portanto não deve possuir métodos como reseta.

Se no futuro Guerreiro precisar de outro contador regressivo (ex.: para 
representar fôlego), não é possível estender Contador duplamente.
Do ponto de vista conceitual, Guerreiro não é um Contador; na verdade, 
Guerreiro possui um Contador de vida.

Re-escreva o código, de forma a substituir herança por composição. Ou seja, 
Guerreiro deve possuir um Contador, que representa a vida do guerreiro. 
Consulte os testes em caso de dúvida.'''

class Contador:
  def __init__(self, inicial):
    self._inicial = inicial
    self._contagem = inicial
  
  def decrementa(self, qtd=1):
    self._contagem -= qtd
    if self._contagem < 0:
      self._contagem = 0
  
  def reseta(self):
    self._contagem = self._inicial
  
  @property
  def contagem(self):
    return self._contagem

class Guerreiro():
  def __init__(self):
    self.life = Contador(10)

  def recebe_dano(self):
    self.life.decrementa(4)
  
  def provoca_dano(self, outro_guerreiro):
    outro_guerreiro.life.recebe_dano()
  
  @property
  def vida(self):
    return self.life._contagem

### Testes
import unittest
from unittest import mock

class TestContaAuditada(unittest.TestCase):
  def test_guerreiro_tem_vida_10(self):
    g = Guerreiro()
    self.assertEqual(g.vida, 10)

  def test_guerreiro_nao_tem_vida_negativa(self):
    g = Guerreiro()
    g.recebe_dano()
    g.recebe_dano()
    g.recebe_dano()
    self.assertEqual(g.vida, 0)
    g.recebe_dano()
    self.assertEqual(g.vida, 0)

  def test_guerreiro_nao_reseta(self):
    g = Guerreiro()
    try:
      g.reseta()
      self.fail()
    except AttributeError:
      pass

  def test_guerreiro_nao_decrementa(self):
    g = Guerreiro()
    try:
      g.decrementa()
      self.fail()
    except AttributeError:
      pass

  @mock.patch('__main__.Contador.decrementa')
  def test_guerreiro_usa_contagem(self, decrementa):
    g = Guerreiro()
    g.recebe_dano()
    decrementa.assert_called()
  
  def test_guerreiro_nao_estende_contador(self):
    self.assertFalse(issubclass(Guerreiro, Contador))

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)