#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, ano, mes, dias;

	cin >> n;

	ano = n/365;
	mes = (n%365)/30;
	dias = (n%365)%30;


	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;

	return 0;
}