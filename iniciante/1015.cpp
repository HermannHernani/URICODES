#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[]) {
  double y[3];
  double x[3];
  int i = 1;
  double aux;
  double distancia;
  while (i < 3) {
    std::cin >> aux;
    y[i] = aux;
    i++;
  }
  i = 1;
  while (i < 3) {
    std::cin >> aux;
    x[i] = aux;
    i++;
  }

  //distancia = ((x[2] + x[1])*(x[2] + x[1])) + ((y[2] + y[1])*(y[2] + y[1]));
  //distancia = sqrt(distancia);
  std::cout << x[1] << x[2] << '\n';
  std::cout << y[1] << y[2] << '\n';
  cout.precision(4);
  //cout << std::fixed << distancia << '\n';
  return 0;
}
