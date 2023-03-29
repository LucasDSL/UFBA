'''
Conta Auditada
Considere a classe Conta ao lado. Crie uma subclasse, ContaAuditada, que registra a quantidade de operações de depósito e retirada que recebeu (atributos qtd_depositos e qtd_retiradas). Implemente também o método quantidade_operacoes(), que retorna o total de operações. Não copie e cole código da classe Conta para a classe ContaAuditada.
'''
class Conta:
  def __init__(self):
    self.saldo = 0

  def deposita(self, quantia):
    self.saldo += quantia

  def retira(self, quantia):
    if self.saldo >= quantia:
      self.saldo -= quantia

class ContaAuditada(Conta): 
    def __init__(self):
        super().__init__()
        self.qtd_retiradas = 0
        self.qtd_depositos = 0

    def deposita(self, quantia):
      self.qtd_depositos += 1
      return super().deposita(quantia) 

    def retira(self, quantia):
      self.qtd_retiradas += 1
      return super().retira(quantia)
    
    def quantidade_operacoes(self): 
      return self.qtd_depositos + self.qtd_retiradas
### Testes
import unittest
from unittest import mock

class TestContaAuditada(unittest.TestCase):
  def test_heranca(self):
    self.assertTrue(issubclass(ContaAuditada, Conta))
  
  @mock.patch('__main__.Conta.__init__')
  @mock.patch('__main__.Conta.deposita')
  @mock.patch('__main__.Conta.retira')
  def test_auditoria(self, retira, deposita, init):
    init.return_value = None
    c = ContaAuditada()
    init.assert_called()
    c.deposita(5)
    deposita.assert_called_with(5)
    c.deposita(3)
    deposita.assert_called_with(3)
    c.retira(2)
    retira.assert_called_with(2)
    c.retira(1)
    retira.assert_called_with(1)
    c.retira(3)
    retira.assert_called_with(3)
    self.assertEqual(c.quantidade_operacoes(), 5)
    self.assertEqual(c.qtd_depositos, 2)
    self.assertEqual(c.qtd_retiradas, 3)

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)