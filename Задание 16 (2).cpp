#include<iostream>
using namespace std;
int chr, cmd;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "\nЗадание #2" << endl;
	int V, z = 1;
	cout << "Введите целое число N, которое обозначает количество членом массива при выводе: ";
	cin >> V;
	int array[1000];
	double A;
	cout << "Введите первый член A и знаменатель D геометрической прогрессии соответственно:" << endl;
	cin >> A;
	array[0] = A;
	double D;
	cin >> D;


	for (int i = 0; i < V; ++i) {
		array[i] = A * z;
		z *= D;
	}
	for (int i = 0; i < V; ++i) {
		cout << array[i] << " ";
	}

	return 0;
}