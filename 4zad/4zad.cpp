#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, n;
	x = 3;
	cout << "Введіть n=";
	cin >> n;
	double y, p, t, e;
	e = 2,718281828459;
	t = x * x + sqrt(abs(n));
	p = e * sqrt(t);
	y = pow(log(pow(p + t, 2)), 2);
	cout << "Результат y=" << y << endl;
	system("pause>>void");
	return 0;
}