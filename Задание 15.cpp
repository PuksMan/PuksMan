#include <stdio.h>
#include<iostream>
using namespace std;
void poweraA3(float a, float* b)
{
    *b = a * a * a;
}
int Sign(float x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else if (x > 0)
    {
        return 1;
    }

}
float RingS(float R1, float R2)
{
    float S = 3.14 * (R1 * R1 - R2 * R2);
    if (R1 > R2)
    {
        return S;
    }
    else
    {
        return 0;
    }
}
int Quarter(int x, int y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    else if (x < 0 && y > 0)
    {
        return 2;
    }
    else if (x < 0 && y < 0)
    {
        return 3;
    }
    else if (x > 0 && y < 0)
    {
        return 4;
    }
}
double Fact2(int N)
{
    double ff = 1;
    for (; N > 1; N -= 2)
        ff *= N;
    return ff;
}
int main(void)
{
    setlocale(LC_ALL, "Rus");
    cout << "Задание №1.\n";
    int i;
    for (i = 1; i <= 5; ++i)
    {
        float a;
        cout << "A:";
        cin >> a;
        float b;
        poweraA3(a, &b);
        cout << a << "^3 = " << b << endl;
    }
    cout << "Задание №2.\n";
    float a1, b1;
    cout << "B:";
    cin >> a1;
    cout << "A:";
    cin >> b1;
    cout << "Sign(A) + Sign(B) = " << Sign(a1) + Sign(b1);
    cout << "\nЗадание №3.\n";
    float R1, R2;
    cout << "Введите 2 числа:" << endl;
    for (int j = 1; j <= 3; j++)
    {
        cin >> R1 >> R2;
        cout << "Площадь " << j << " кольца = " << RingS(R1, R2) << "." << endl;
    }
    cout << "\nЗадание №4.\n";
    int x, y;
    cout << "Введите 2 числа:" << endl;
    for (int j = 1; j <= 3; j++)
    {
        cin >> x >> y;
        cout << "Точка расположена в " << Quarter(x, y) << " четверти." << endl;
    }
    cout << "\nЗадание №5.\n";
    int N;
    cout << "Введите число:" << endl;
    cin >> N;
    cout << "N!! = " << Fact2(N) << ".";
    return 0;
}
