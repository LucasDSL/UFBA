'''Imposto
Crie uma função que classifique uma pessoa em uma das seguintes categorias, de acordo com a idade: “bebê”, “criança”, “adolescente”, “adulta”. Considere o seguinte:

bebê: 0 a 1 anos
criança: 2 a 11 anos
adolescente: 12 a 17 anos
adulta: 18 anos ou mais
'''
def faixa_etaria(idade):
  if idade >= 0 and idade <=1 : 
    return "bebê"
  elif idade >= 2 and idade <= 11: 
    return "criança"
  elif idade >= 12 and idade <= 17: 
    return "adolescente"
  else: 
    return "adulta"

assert faixa_etaria(0) == "bebê"
assert faixa_etaria(1) == "bebê"
assert faixa_etaria(2) == "criança"
assert faixa_etaria(11) == "criança"
assert faixa_etaria(12) == "adolescente"
assert faixa_etaria(17) == "adolescente"
assert faixa_etaria(18) == "adulta"
assert faixa_etaria(81) == "adulta"