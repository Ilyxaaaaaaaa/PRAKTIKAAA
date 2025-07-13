#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y;
    const double PI = 3.141592653589793;

    cout << fixed << setprecision(4);
    cout << "Таблица значений функции y(x):\n";
    cout << "-----------------------------\n";
    cout << "   x\t\t   y\n";
    cout << "-----------------------------\n";

    for (x = -6.0; x <= 6.0001; x += 0.5) {
        if (fabs(x) < 3) {
            y = (2 * pow(x, 3)) / (pow(x, 2) + 1);
        } else {
            if (x == 0) {
                cout << setw(6) << x << "\t\t" << "ОШИБКА (деление на 0)" << endl;
                continue;
            }
            y = 1.5 * fabs(tan(PI / x));
        }

        cout << setw(6) << x << "\t\t" << setw(8) << y << endl;
    }

    return 0;
}
