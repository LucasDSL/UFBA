'''Preço final
Escreva uma função preco_final(preco_produto, desconto, valor_frete), que calcula o preço final de um produto, calculado com base no preço do produto, no desconto (em porcentagem) e um frete (valor fixo). O desconto é aplicado sobre o preço do produto e o frete é somado ao final. Você deve definir as seguintes funções e chamá-las na sua função preco_final:

preco_com_desconto(preco_produto, desconto)
preco_com_frete(preco, valor_frete)'''
def preco_final(preco_produto, desconto, valor_frete):
  preco = preco_com_desconto(preco_produto, desconto) 
  return preco_com_frete(preco, valor_frete)

def preco_com_desconto(preco_produto, desconto):
  return preco_produto - desconto/100 * preco_produto

def preco_com_frete(preco, valor_frete):
  return preco + valor_frete

### Testes
assert preco_com_desconto(200, 20) == 160
assert preco_com_desconto(200, 100) == 0
assert preco_com_desconto(200, 0) == 200

assert preco_com_frete(200, 10) == 210

assert preco_final(200, 10, 0) == 180
assert preco_final(200, 0, 5) == 205
assert preco_final(200, 10, 5) == 185

from unittest.mock import MagicMock
preco_com_desconto = MagicMock(return_value=1)
preco_com_frete = MagicMock(return_value=2)
assert preco_final(200, 50, 50) == 2
preco_com_desconto.assert_called()
preco_com_frete.assert_called()