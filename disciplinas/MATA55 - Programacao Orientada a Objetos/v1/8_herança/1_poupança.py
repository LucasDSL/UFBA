'''
Conta poupança
Crie uma classe ContaPoupanca, que estende a classe Conta e adiciona o método rende(), que aumenta o saldo em 1%.'''
class Conta:
  def __init__(self, numero, saldo):
    self.numero = numero
    self.saldo = saldo
  
  def deposita(self, quantia):
    self.saldo += quantia

class ContaPoupanca(Conta): 
    def rende(self): 
        self.saldo += self.saldo * 0.01

### Testes
import unittest
from unittest import mock

class TestConta(unittest.TestCase):
  def test_instanciar_conta_poupanca(self):
    c = ContaPoupanca('123', 100.0)
    self.assertEqual(c.numero, '123')
    self.assertEqual(c.saldo, 100.0)
  
  def test_conta_normal_nao_rende(self):
    c = Conta('123', 123)
    self.assertFalse(hasattr(c, 'rende'))

  def test_conta_poupanca_rende(self):
    c = ContaPoupanca('123', 200.0)
    c.rende()
    self.assertEqual(c.saldo, 202.0)

  @mock.patch('__main__.Conta.__init__')
  def test_herda_init(self, mock_super_init):
    mock_super_init.return_value = None
    c = ContaPoupanca('123', 200.0)
    self.assertTrue(mock_super_init.called)

  @mock.patch('__main__.Conta.deposita')
  def test_herda_deposita(self, mock_super_deposita):
    c = ContaPoupanca('123', 200.0)
    c.deposita(1)
    self.assertTrue(mock_super_deposita.called)

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)