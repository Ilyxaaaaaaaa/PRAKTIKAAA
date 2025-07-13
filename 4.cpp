#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int day = 1;
    int pairs = 2;
    int total = 0;

    cout << "День\tСшито пар в день\n";

    while (pairs <= 100) {
        cout << day << "\t" << pairs << endl;
        total += pairs;
        pairs *= 2;
        if (pairs > 100) {
            pairs = 100;
            day++;
            cout << day << "\t" << pairs << endl;
            total += pairs;
            break;
        }
        day++;
    }

    cout << "\nВсего дней: " << day << endl;
    cout << "Всего сшито пар: " << total << endl;

    return 0;
}
