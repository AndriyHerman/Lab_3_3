// Lab_03_3.cpp
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення функції

    // Введення початкових даних
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // Обчислення значення функції за допомогою повного розгалуження (if-else)
    if (x <= 0)
    {
        y = -R / 6.0 * (x + 6.0);
    }
    else if (x <= R)
    {
        y = -sqrt(R * R - x * x);
    }
    else if (x <= 2 * R)
    {
        y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
    }
    else
    {
        y = R;
    }

    // Виведення результату
    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}