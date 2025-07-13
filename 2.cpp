#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char choice;

    do {
        double a1, b1, c1, a2, b2, c2;
        cout << "Введите коэффициенты для системы уравнений:\n";
        cout << "a1, b1, c1: ";
        cin >> a1 >> b1 >> c1;
        cout << "a2, b2, c2: ";
        cin >> a2 >> b2 >> c2;

        cout << "\nСистема уравнений:\n";
        cout << a1 << "x + " << b1 << "y = " << c1 << endl;
        cout << a2 << "x + " << b2 << "y = " << c2 << endl;

        double D = a1 * b2 - a2 * b1;
        double Dx = c1 * b2 - c2 * b1;
        double Dy = a1 * c2 - a2 * c1;

        switch (D != 0) {
            case true:
                cout << "\nСистема имеет единственное решение:\n";
                cout << "x = " << Dx / D << "\n";
                cout << "y = " << Dy / D << "\n";
                break;
            case false:
                if (Dx == 0 && Dy == 0) {
                    cout << "\nСистема имеет бесконечно много решений.\n";
                } else {
                    cout << "\nСистема не имеет решений.\n";
                }
                break;
        }

        cout << "\nПовторить? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
