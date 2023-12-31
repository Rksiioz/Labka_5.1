#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = k(1 + p * q, q * q) + pow(k(p, p * p), 2);

	cout << "c = " << c << endl;

	return 0;
}

double k(const double x, const double y)
{
	return (x / (1 + sin(y) * sin (y)) + (y / (1 + x * x)));
}