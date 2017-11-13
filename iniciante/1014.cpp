#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  double consumo, distancia, litros;
  std::cin >> distancia;
  std::cin >> litros;
  consumo = distancia / litros;

  cout.precision(3);
  cout << std::fixed << consumo << " km/l" << "\n";
  return 0;
}
