#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

  double salario, vendas, total, comissao;
  string nome;


  std::cin >> nome;
  std::cin >> salario;
  std::cin >> vendas;

  comissao = (vendas/100)*15;
  total = (comissao + salario);

  cout.precision(2);
  cout << std::fixed << "TOTAL = R$ " << total <<'\n';
  return 0;
}
