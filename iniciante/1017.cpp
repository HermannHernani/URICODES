#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  float horas, km;
  double combustivel;
  std::cin >> horas;
  std::cin >> km;

  combustivel = horas*km/12;
  cout.precision(3);
  cout << std::fixed << combustivel << '\n';
  return 0;
}
