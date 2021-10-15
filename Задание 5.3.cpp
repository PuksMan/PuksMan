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
	if ((x1 < x3 < x2) & (y1 < y3 < y2))
	{
		AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		cout << "Длина отрезка AC = " << AC << endl;
		BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		cout << "Длина отрезка BC = " << BC << endl;
		cout << "Произведение отрезков AC и BC =   " << AC * BC << endl;
	}
	else
	{
		cout << "Точка находится вне пределов точек A и B" << endl;
	}
	return 0;
}