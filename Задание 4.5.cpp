#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, sum, razn, pr, chast;
	cout << "Введите ненулевые чилса" << endl;
	cin >> a >> b;
	sum = abs(a + b);
	razn = abs(a - b);
	pr = abs(a * b);
	chast = abs(a / b);
	cout << "Модуль суммы чисел a и b равен " << sum << endl;
	cout << "Модуль разности чисел a и b равен " << razn << endl;
	cout << "Модуль произведения чисел a и b равен " << pr << endl;
	cout << "Модуль частнго чисел a и b равен " << chast << endl;
}