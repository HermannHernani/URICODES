#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main(int argc, char const *argv[]) {
  float y[3];
  float x[3];
  int i = 1;
  float aux;
  float distancia;
  while (i < 2) {
    std::cin >> aux;
    x[1] = aux;
    std::cin >> aux;
    y[1] = aux;
    i++;
  }
  i = 1;
  while (i < 2) {
    std::cin >> aux;
    x[2] = aux;
    std::cin >> aux;
    y[2] = aux;
    i++;
  }
  float x1, x2, y1, y2;
  x1 = x[1];
  x2 = x[2];
  y1 = y[1];
  y2 = y[2];
  distancia = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  cout.precision(4);

  cout << std::fixed << distancia << '\n';

  return 0;
}
