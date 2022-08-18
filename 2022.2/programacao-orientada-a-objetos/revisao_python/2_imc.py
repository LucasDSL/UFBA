'''IMC
Crie uma função que determina se uma pessoa está obesa. Uma pessoa obesa é aquela que possui índice de massa corporal (IMC) igual ou superior a 30. O IMC é calculado pela razão entre o peso e o quadrado da altura de uma pessoa.'''

def esta_obesa(peso, altura):
  return True if peso / (altura * altura) >= 30 else False  

assert esta_obesa(70, 1.70) == False
assert esta_obesa(170, 1.70) == True