#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  int a, b, c, d, dif;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  dif = (a * b - c * d);
  std::cout << "DIFERENCA = " << dif << '\n';
  return 0;
}
