#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2, x3, y3;
	cout << "Введите координаты точки A:" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты точки B:" << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты точки C:" << endl;
	cin >> x3 >> y3;

	double AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	double BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));	//d = √((х2 – х1)^2 + (у2 – у1)^2)
	cout << "Длина отрезка AC = " << AC << endl
		<< "Длина отрезка BC = " << BC << endl
		<< "Сумма отрезков AC и BC = " << AC + BC << endl;
	return 0;
}