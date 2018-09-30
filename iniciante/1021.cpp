#include <iostream>

using namespace  std;

int main(int argc, char const *argv[])
{

	double n;
	cin >> n;

	int inteiro, aux, aux1;
	int cem, cinquenta, vinte, dez, cinco, dois;
	int um, cinquenta_cen, vinte_e_cinco, dez_cen, cinco_cen, um_cen;

	inteiro = n;
	n = 100*n;
	aux1 = n;

	cem = inteiro/100;
		aux = (inteiro%100);
	cinquenta = (aux/50);
		aux = (aux%50);
	vinte = (aux/20);
		aux = aux%20;
	dez = (aux/10);
		aux = (aux%10);
	cinco = (aux/5);
		aux = (aux%5);
	dois = (aux/2);
		aux = (aux%2);

	um = aux/1;
		aux1 = aux1%100;
	cinquenta_cen = aux1/50;
		aux1 = aux1%50;
	vinte_e_cinco = aux1/25;
		aux1 = aux1%25;
	dez_cen = aux1/10;
		aux1 = aux1%10;
	cinco_cen = aux1/5;
		aux1 = aux1%5;
	um_cen = aux1/1; 

	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinquenta << " nota(s) de R$ 50.00" << endl;
	cout << vinte << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinco << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	cout << cinquenta_cen << " moeda(s) de R$ 0.50" << endl;
	cout << vinte_e_cinco << " moeda(s) de R$ 0.25" << endl;
	cout << dez_cen << " moeda(s) de R$ 0.10" << endl;
	cout << cinco_cen << " moeda(s) de R$ 0.05" << endl;
	cout << um_cen << " moeda(s) de R$ 0.01" << endl;

	return 0;
}