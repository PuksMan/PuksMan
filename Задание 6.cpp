#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Задание №1." << endl << "Введите значение переменных а и b:" << endl;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b << endl;
	cout << "\nЗадание №2." << endl << "Введите значение переменных а, b и с:" << endl;
	int a1, b1, c1;
	cin >> a1 >> b1 >> c1;
	a1 = a1 + b1 + c1;
	b1 = a1 - b1 - c1;
	c1 = a1 - b1 - c1;
	a1 = a1 - b1 - c1;
	cout << a1 << " " << b1 << " " << c1 << endl;
	cout << "\nЗадание №3." << "\nВведите значение переменных а, b и с:" << endl;
	int a2, b2, c2;
	cin >> a2 >> b2 >> c2;
	a2 = a2 + b2 + c2;
	c2 = a2 - b2 - c2;
	b2 = a2 - c2 - b2;
	a2 = a2 - b2 - c2;
	cout << a2 << " " << b2 << " " << c2;
	cout << "\n\nЗадание №4." << "\nВведите значение переменной x для вычисления значения y:" << endl;
	int yy, xx, aa, bb, dd;
	double ss, ff, gg, hh;
	cout << "Выберите тип числа x: " << endl
		<< "1.Целочисленное" << endl
		<< "2.Дробное" << endl;
	cin >> dd;
	switch (dd)
	{
	case 1:
		cout << "Введите значение x:" << endl;
		cin >> xx;
		aa = pow(xx, 6);
		bb = pow(xx, 2);
		yy = 3 * aa - 6 * bb - 7;
		cout << "y = " << yy << endl;
		break;
	case 2:
		cout << "Введите значение x:" << endl;
		cin >> ss;
		ff = pow(ss, 6);
		gg = pow(ss, 2);
		hh = 3 * ff - 6 * gg - 7;
		cout << "y = " << hh << endl;
		break;
	default:
		break;
	}
	cout << "\nЗадание №5." << endl;
	int q, w, l, k, z;
	double s, m, g, h;
	cout << "Выберите тип числа x: " << endl
		<< "1.Целочесленное" << endl
		<< "2.Дробное" << endl;
	cin >> z;
	switch (z)
	{
	case 1:
		cout << "Введите значение x:" << endl;
		cin >> w;
		l = pow(w - 3, 6);
		k = pow(w - 3, 3);
		q = 4 * l - 7 * k + 2;
		cout << "y = " << q << endl;
		break;
	case 2:
		cout << "Введите значение x:" << endl;
		cin >> s;
		m = pow(s - 3, 6);
		g = pow(s - 3, 3);
		h = 4 * m - 7 * g + 2;
		cout << "y = " << h << endl;
		break;
	default:
		break;
	}
	cout << "\nЗадание №6." << "\nВведите значение A для вычисления A^8:" << endl;
	int A;
	double B;
	cin >> A;
	B = pow(A, 6);
	A = A * A * B;
	cout << A << endl;
	cout << "\nЗадание №7." << "\nВведите значение A для вычисления A^15:" << endl;
	int C;
	double D;
	cin >> C;
	D = pow(C, 10);
	C = C * C * C * C * C * D;
	cout << C << endl;


	return 0;
}