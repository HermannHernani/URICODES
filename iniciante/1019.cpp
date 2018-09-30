#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int horas, minutos, segundos, n;

  std::cin >> n;

  horas = (n/3600);
  minutos = n%3600/60;
  segundos = n%60;


  std::cout << horas << ":" << minutos << ":" << segundos << '\n';
  return 0;
}
