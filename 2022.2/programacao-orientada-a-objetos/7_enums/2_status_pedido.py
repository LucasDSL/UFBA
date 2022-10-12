'''
Status do Pedido
Quando um cliente realiza um pedido em uma loja, o pedido passa por uma série de situações (status) até ser entregue ao cliente. Inicialmente o pedido possui o status RECEBIDO. Então, o cliente informa uma forma de pagamento e efetua o pagamento; o pedido passa para o status PAGO. A partir daí o produto é recolhido pela transportadora e passa para o status ENVIADO. Por fim, o produto chega ao cliente e adquire o status ENTREGUE.

Complete o código:

Implemente a enumeração Status, tendo como membro os status apresentados anteriormente.
Adicione um atributo status a Pedido e implemente a lógica dos métodos pagar, enviar e entregar
Implemente o método situacao(), que retorna o status do pedido como string, em letras minúsculas (podendo ser recebido, pago, enviado ou entregue).
'''

from enum import Enum

class Status(Enum):
  RECEBIDO='recebido'
  PAGO='pago'
  ENVIADO='enviado'
  ENTREGUE='entregue'

class Pedido:
  def __init__(self, valor=0.0):
    self.valor = valor
    self.status = Status.RECEBIDO

  def pagar(self, forma_de_pagamento):
    if(self.status != Status.RECEBIDO): return
    self.status = Status.PAGO
  
  def enviar(self, transportadora):
    if(self.status != Status.PAGO): return
    self.status = Status.ENVIADO
  
  def entregar(self):
    if(self.status != Status.ENVIADO): return
    self.status = Status.ENTREGUE
  
  def situacao(self):
    return self.status.value

### Testes
import unittest

class TestPedido(unittest.TestCase):
  def test_pedido_novo(self):
    p = Pedido()
    self.assertEqual(p.status, Status.RECEBIDO)
  
  def test_pedido_pago(self):
    p = Pedido()
    p.pagar('pix')
    self.assertEqual(p.status, Status.PAGO)

  def test_pedido_enviado(self):
    p = Pedido()
    p.enviar('ufbalog')
    self.assertEqual(p.status, Status.RECEBIDO)
    p.pagar('pix')
    p.enviar('ufbalog')
    self.assertEqual(p.status, Status.ENVIADO)

  def test_pedido_entregue(self):
    p = Pedido()
    p.entregar()
    self.assertEqual(p.status, Status.RECEBIDO)
    p.pagar('pix')
    p.entregar()
    self.assertEqual(p.status, Status.PAGO)
    p.enviar('ufbalog')
    p.entregar()
    self.assertEqual(p.status, Status.ENTREGUE)

  def test_situacao(self):
    p = Pedido()
    self.assertEqual(p.situacao(), 'recebido')
    p.pagar('pix')
    self.assertEqual(p.situacao(), 'pago')
    p.enviar('ufbalog')
    self.assertEqual(p.situacao(), 'enviado')
    p.entregar()
    self.assertEqual(p.situacao(), 'entregue')

  def test_enum(self):
    self.assertTrue(isinstance(Status.RECEBIDO, Status))
    self.assertTrue(isinstance(Status.RECEBIDO, Enum))

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)