#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  float vet[3];
  float vec[3];
  int i = 1;
  float aux;
  float totalum;
  float totaldois;
  float total;

  while (i <= 3) {
    std::cin >> aux;
    vet[i] = aux;
    i++;
  }
  i = 1;
  while (i <= 3) {
    std::cin >> aux;
    vec[i] = aux;
    i++;
  }


  totalum = vet[2] * vet[3];
  totaldois = vec[2] * vec[3];
  total = totalum + totaldois;

  cout.precision(2);
  cout << std::fixed << "VALOR A PAGAR: R$ "<< total << '\n';

  return 0;
}
