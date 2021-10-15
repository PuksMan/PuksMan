#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int x1, y1, x2, y2;
	cout << "Введите координаты первой точки:" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки:" << endl;
	cin >> x2 >> y2;
	double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));	//d = √((х2 – х1)^2 + (у2 – у1)^2)
	cout << "Расстояние между двумя точками = " << d << endl;
}