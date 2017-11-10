#include <iostream>

using namespace std;



int main(int argc, char const *argv[]) {
  double a, b, c, media;


  cin >> a;
  cin >> b;
  cin >> c;

  media = (a*2 + b*3 + c*5)/(2+3+5);
  cout.precision(1);
  cout << std::fixed << "MEDIA = " << media << "\n";
  return 0;
}
