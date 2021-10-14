#include <iostream>
using namespace std;

int main()
{
	int a, b, s, p;
	cout << "Enter the sides of rectangle a and b" << endl;
	cin >> a >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "Square=" << s << endl;
	cout << "Perimeter" << p << endl;
}
