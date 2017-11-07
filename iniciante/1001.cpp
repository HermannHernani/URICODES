#include <iostream>

using namespace std;

int soma(int a, int b){
	int x = 0;
	cin >> a;
	cin >> b;
	x = (a+b);

	return x;
};

int main(int argc, char const *argv[]) {
	int a, b, x;
	cout <<"X = " << soma(a,b) << "\n";
	return 0;

}
