#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

bool Yes(double x, double y) {
    return x * x + y * y <= 1.0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Проверка точек параболы y = x^2 на принадлежность единичной окружности:\n";
    cout << "-------------------------------------------\n";
    cout << "   x\t   y = x^2\tПринадлежит?\n";
    cout << "-------------------------------------------\n";

    for (double x = -2.0; x <= 2.0001; x += 0.5) {
        double y = x * x;
        cout << fixed;
        cout.precision(2);
        cout << " " << x << "\t   " << y << "\t\t" << (Yes(x, y) ? "Да" : "Нет") << endl;
    }

    return 0;
}
