'''Robô aspirador
Uma empresa fabrica robôs aspiradores para consumidores domésticos. São três os robôs:

robô básico: move-se em quatro direções (frente, trás, esquerda e direita)
robô plus: além de mover-se em quatro direções, possui a função explora, que é uma programação que faz o robô mover-se em quadrados (frente, direita, trás, esquerda)
robô smart: além de mover-se em quatro direções, possui a função retorna_a_base, que posiciona o robô na posição da base (definida na inicialização do robô)
O código do robô básico já está implementado. Implemente os outros dois robôs, usando o recurso de herança. Consulte os testes em caso de dúvida.'''

class RoboBasico:
  DIRECOES = {'frente': (0, -1), 'tras': (0, 1),
      'esquerda': (-1, 0), 'direita': (1, 0)}
  def __init__(self, x, y):
    self.x = x
    self.y = y

  def move(self, direcao):
    dx, dy = RoboBasico.DIRECOES[direcao]
    self.x += dx
    self.y += dy

class RoboPlus(RoboBasico): 
  def explora(self):
    self.move('frente')
    self.move('direita')
    self.move('tras')
    self.move('esquerda')

class RoboSmart(RoboBasico):
  def __init__(self, x, y, base_x, base_y, ):
    self._base_x = base_x
    self._base_y = base_y 
    self.x = x 
    self.y = y
  def retorna_a_base(self):
    self.x = self._base_x 
    self.y = self._base_y 
### Testes
import unittest
from unittest import mock

def declared_methods(klass):
  return list(filter(lambda x: x[0:2] != '__', klass.__dict__.keys()))

class TestRobo(unittest.TestCase):
  def test_heranca(self):
    self.assertTrue(issubclass(RoboSmart, RoboBasico))
    self.assertTrue(issubclass(RoboPlus, RoboBasico))
  
  def test_metodos_declarados(self):
    self.assertEqual(declared_methods(RoboSmart), ['retorna_a_base'])
    self.assertEqual(declared_methods(RoboPlus), ['explora'])

  @mock.patch('__main__.RoboBasico.move')
  def test_robo_plus(self, mock_move):
    r = RoboPlus(5, 5)
    r.explora()
    mock_move.assert_any_call('frente')
    mock_move.assert_any_call('tras')
    mock_move.assert_any_call('esquerda')
    mock_move.assert_any_call('direita')
  
  def test_robo_smart(self):
    r = RoboSmart(5, 5, 1, 2)
    r.retorna_a_base()
    self.assertEqual(r.x, 1)
    self.assertEqual(r.y, 2)
    r = RoboSmart(5, 5, 2, 3)
    r.retorna_a_base()
    self.assertEqual(r.x, 2)
    self.assertEqual(r.y, 3)


if __name__ == '__main__':
  import sys
  unittest.main(exit=False)