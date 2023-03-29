#include <iostream>
using namespace std;
//Caso o programa seja feito conforme o enunciado, o programa entra em loop infinito
//portanto, optei por usar cont como argumento da função main() e não como uma variável local.

int main(int cont = 1)
{
  //int cont = 1; Se cont fosse usada desta forma, como variável local, main() sempre iniciaria com a variável retornando
  //à 1 e nunca terminaria, causando um loop infinito.
  cout << cont << endl;
  if (cont == 10) return 0;
  return main(cont + 1);
}