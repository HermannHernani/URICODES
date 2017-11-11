#include <iostream>


using namespace std;


int main(int argc, char const *argv[]) {
  int num, horas;
  float trab;
  double salario;

  std::cin >> num;
  std::cin >> horas;
  std::cin >> trab;

  salario = trab*horas;

  std::cout << "NUMBER = " << num << '\n';
  cout.precision(2);
  cout << std::fixed << "SALARY = U$ " << salario << '\n';
  return 0;
}
