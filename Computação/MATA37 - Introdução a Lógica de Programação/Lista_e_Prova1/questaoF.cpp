#include <iostream>

int main() {
  int total_segundos, minutos, horas, segundos;

  std::cin >> total_segundos;
  
  horas = total_segundos / 3600;
  minutos = total_segundos / 60 - (horas * 60);
  segundos = total_segundos - horas * 3600 - minutos * 60;

  std::cout << horas << "h " << minutos << "m " << segundos << "s" << std::endl;
}