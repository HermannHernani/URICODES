#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double valores[4];
  int i = 1;
  double aux;
  double pi = 3.14159;


  while (i < 4) {
    std::cin >> aux;
    valores[i] = aux;
    i++;
  }
  double triangulo = (valores[1]*valores[3])/2;
  double circulo = pi*valores[3]*valores[3];
  double trapezio = (valores[3]*(valores[1]+valores[2]))/2;
  double quadrado = valores[2]*valores[2];
  double retangulo = valores[1]*valores[2];


  cout.precision(3);
  cout << std::fixed << "TRIANGULO: " << triangulo << '\n';
  cout << std::fixed << "CIRCULO: " << circulo << '\n';
  cout << std::fixed << "TRAPEZIO: " << trapezio << '\n';
  cout << std::fixed << "QUADRADO: " << quadrado << '\n';
  cout << std::fixed << "RETANGULO: " << retangulo << '\n';

  return 0;
}
