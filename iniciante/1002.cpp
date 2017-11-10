#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {

  double raio, area;
  cin >> raio;
  area = 3.14159*raio*raio;

  cout.precision(4);
  cout << std::fixed << "A=" << area << "\n";
  return 0;
}
