#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, sum, razn, pr, chast;
	cout<< "Введите ненулевые числа" << endl;
	cin >> a >> b;
	sum = pow((a + b), 2);
	razn = pow((a - b), 2);
	pr = pow((a * b), 2);
	chast = pow((a / b), 2);
	cout<< "Квадрат суммы=" << sum << endl;
	cout << "Квадрат разности=" << razn << endl;
	cout << "Квадрат произведения=" << pr << endl;
	cout << "Квадрат частного=" << chast << endl;
}
