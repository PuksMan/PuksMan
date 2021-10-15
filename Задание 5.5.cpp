#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2, x3, y3;
	double AC, AB, BC, P, S, p;
	cout << "Введите координаты вершины A:" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты вершины B:" << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты вершины C:" << endl;
	cin >> x3 >> y3;

	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	P = AC + AB + BC;
	p = P / 2;
	S = sqrt(p * (p - AC) * (p - AB) * (p - BC));
	cout << "Площадь треугольника = " << S << endl << "Периметр треугольника = " << P << endl;

	return 0;
}