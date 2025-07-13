#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    cout << "Введите длины катетов a и b: ";
    cin >> a >> b;

    double c = sqrt(a * a + b * b);
    double perimeter = a + b + c;
    double area = (a * b) / 2;

    cout << fixed << setprecision(2);
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}
