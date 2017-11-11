#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char const *argv[]) {
	int r;
	double pi = 3.14159;
	double result;


	std::cin >> r;

	result = (4 * pi * pow(r,3))/3;


	cout.precision(3);
	cout << std::fixed << "VOLUME = " << result << "\n";
	return 0;
}
