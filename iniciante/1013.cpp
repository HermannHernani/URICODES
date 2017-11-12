#include <iostream>
using namespace std;



int main(int argc, char const *argv[]) {
  int vet[4];
  int i = 1;
  int aux;
  int maior = 0;
  while (i < 4) {
    std::cin >> aux;
    vet[i] = aux;
    i++;
  }

  if (vet[1] > vet[2] && vet[1] > vet[3]) {
    maior = vet[1];
  }
  if (vet[2] > vet[1] && vet[2] > vet[3]) {
    maior = vet[2];
  }
  if (vet[3] > vet[1] && vet[3] > vet[2]) {
    maior = vet[3];
  }

  std::cout << maior << " eh o maior" << '\n';
  return 0;
}
