#include <iostream>
#include <math.h>
using namespace std;

double area(float raio){
  double n = 3.14159;
  double a;
  cin >> raio;
  a = n * pow(raio, 2);
  return a;
};

int main(int argc, char const *argv[]) {
  int raio, n , a;
  cout.setf(std::ios::fixed, std:: ios::floatfield);
  cout.precision(4);
  cout << "A=" << area(raio) << '\n';
  return 0;
}
