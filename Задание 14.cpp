#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Задание 1." << endl;
    int aa, bb;
    cout << "a:";
    cin >> aa;
    cout << "b:";
    cin >> bb;
    for (int i = aa; i <= bb;)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << endl;
        }
        i++;
    }

    cout << "Задание 2." << endl;
    int a, b;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    while (a > b)
    {
        a = a - b;
    }
    cout << "длиннa незанятой части отрезка A = " << a << endl;
    cout << "Задание 3." << endl;
    int n, k;
    cout << "Введите целое число N (>1):" << endl;
    do {
        cin >> n;
    } while (n <= 1);
    int Sum = 0;
    k = 0;
    while (n - Sum > 0) {
        k += 1;
        for (int i = 0; i < k; i++) {
            Sum += i;
        }
    }
    cout << "K = " << k << endl << "S = " << Sum << endl;
    cout << "Задание 4." << endl;
    float p;
    cout << "P:";
    cin >> p;
    int kk = 1;
    float s = 1000;
    while (s <= 1100) {
        ++kk;
        s += s * p / 100;
    }
    cout << "k = " << kk << endl << "S =" << s << endl;
    cout << "Задание 5." << endl;

    int A, B;

    cout << "Введите 2 числа:" << endl;

    cin >> A >> B;

    while (max(A, B) % min(A, B) != 0)
    {
        if (A > b)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }
    cout << "НОД = " << min(A, B) << endl;

    cout << "НОД этих чисел: " << A << endl;
    cout << "Задание 6." << endl;
    int nn;
    cout << "N:";
    cin >> nn;
    int f1 = 1, f2 = 1, f = 0, z = 2;
    while (f < nn) {
        ++z;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << "k:" << z;
    return 0;
}