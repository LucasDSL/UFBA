'''Usuário
O programa ao lado representa usuários de uma universidade pública federal, que 
podem ser alunos ou servidores (que inclui docentes e servidores 
técnico-administrativos). Do jeito que foi implementado, no entanto, é possível 
instanciar objetos da classe Usuario, o que não faz sentido, já que todos os 
usuários são alunos ou servidores.

Modifique o código para que a classe Usuario não possa ser instanciada, mas 
possa ser estendida, usando o conceito de classes abstratas.
'''
from abc import ABC, abstractmethod
import re

class Usuario(ABC):
  @abstractmethod
  def __init__(self, matricula, nome):
    self._matricula = matricula
    self._nome = nome
  
  @abstractmethod
  def valida(self):
    pass
  def nome_normalizado(self):
    return self._nome.title()

class Aluno(Usuario):
  def __init__(self, matricula, nome):
    self._matricula = matricula
    self._nome = nome
  def valida(self):
    return re.match('^\\d{9}$', self._matricula)

class Servidor(Usuario):
  def __init__(self, matricula, nome):
    self._matricula = matricula
    self._nome = nome
  def valida(self):
    return re.match('^\\d{7}$', self._matricula)

### Testes
import unittest
from unittest import mock

class TestUsuario(unittest.TestCase):
  def test_validar_aluno(self):
    a = Aluno('200310593', 'Rodrigo')
    self.assertTrue(a.valida())
  
  def test_validar_servidor(self):
    s = Servidor('1973264', 'Rodrigo')
    self.assertTrue(s.valida())
  
  def test_nao_pode_instanciar_usuario(self):
    try:
      u = Usuario('123123', 'ABC')
      self.fail()
    except TypeError:
      pass

  def test_nova_classe_derivada(self):
    class AAA(Usuario):
        def __init__(self):
            pass
    try:
      u = AAA()
      self.fail()
    except TypeError:
      pass

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)