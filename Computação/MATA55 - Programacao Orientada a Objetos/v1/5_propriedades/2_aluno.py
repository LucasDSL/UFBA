'''
Aluno
Crie a classe Aluno, com as propriedades matricula e nome (ambas strings), além dos métodos relevantes de acordo com a seguinte especificação:

O nome do aluno pode ser alterado, mas nunca o seu número de matrícula
Duas instâncias de Aluno são consideradas iguais se possuem o mesmo número de matrícula
Assuma, para este exercício, que a classe Aluno sempre será instanciada com um número de matrícula e um nome válidos, passados nessa ordem.'''
class Aluno:
  def __init__(self, matricula, nome): 
    self._code = matricula 
    self._name = nome
  def __eq__ (self, other):
    return self.matricula == other.matricula 

  @property
  def nome(self):
    return self._name
  @nome.setter 
  def nome(self, nome): 
    self._name = nome 

  @property 
  def matricula(self):
    return self._code
    
### Testes
import unittest
class TestAluno(unittest.TestCase):
  def test_iguais(self):
    a = Aluno('123', 'abc')
    b = Aluno('123', 'abc')
    self.assertEqual(a, b)
  
  def test_mesma_matricula_nome_diferente(self):
    a = Aluno('123', 'abc')
    b = Aluno('123', 'def')
    self.assertEqual(a, b)
  
  def test_diferentes(self):
    a = Aluno('123', 'abc')
    b = Aluno('124', 'abc')
    self.assertNotEqual(a, b)

  def test_pode_mudar_nome(self):
    a = Aluno('123', 'abc')
    a.nome = 'def'
    self.assertEqual(a.nome, 'def')
  
  def test_nao_pode_mudar_matricula(self):
    a = Aluno('123', 'abc')
    with self.assertRaises(AttributeError):
      a.matricula = '456'

if __name__ == '__main__':
  import sys
  unittest.main(exit=False)