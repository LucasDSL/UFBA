'''Distância
Crie uma função distancia(x1, y1, x2, y2), que calcula a distância euclideana entre os pontos (x1, y1) e (x2, y2). A função deve ter uma docstring para documentar o seu uso.'''
import math

def distancia(x1, y1, x2, y2):
  '''Calculate euclidian distance between two points'''
  dist = (x1-x2) ** 2 + (y1-y2) ** 2
  return math.sqrt(dist)

### Testes
assert distancia(2, 2, 5, 6) == 5
assert distancia.__doc__ is not None