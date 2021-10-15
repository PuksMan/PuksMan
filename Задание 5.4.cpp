#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2, x3, y3;
	double d, a, b, P, S, p;
	cout << "Введите координаты первой вершины :" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты второй вершины :" << endl;
	cin >> x2 >> y2;

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	a = d * d * 1 / 2;
	b = d * sqrt(3) / 2;
	P = 2 * (a + b);
	S = a * b;
	cout << "Площадь треугольника = " << S << endl << "Периметр треугольника = " << P << endl;

	return 0;
}