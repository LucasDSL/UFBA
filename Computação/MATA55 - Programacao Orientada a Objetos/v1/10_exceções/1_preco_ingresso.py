'''
Preço do ingresso
Complete a implementação do método preco_ingresso.'''

def preco_ingresso(idade):
  '''
  Retorna o preço do ingresso para um comprador
  com determinada idade. Ingressos só podem ser
  vendidos para pessoas com idade entre 18 e 140
  anos. Caso uma idade fora dessa faixa seja
  passada, é lançada uma exceção ValueError.
  '''
  if idade >= 18 and idade <= 60:
    return 30.0
  elif idade > 60 and idade <= 140:
    return 15.0
  raise ValueError() 

### Testes
import unittest
from unittest import mock

class TestResumo(unittest.TestCase):
  def test_valores_validos(self):
    self.assertEqual(preco_ingresso(18), 30.0)
    self.assertEqual(preco_ingresso(60), 30.0)
    self.assertEqual(preco_ingresso(61), 15.0)
    self.assertEqual(preco_ingresso(140), 15.0)

  def test_valores_invalidos(self):
    with self.assertRaises(ValueError):
      preco_ingresso(17)
    with self.assertRaises(ValueError):
      preco_ingresso(0)
    with self.assertRaises(ValueError):
      preco_ingresso(141)

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)