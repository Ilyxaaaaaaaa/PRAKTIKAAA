#include <iostream>
#include <windows.h>
using namespace std;

struct Baggage {
    int count;
    float weight;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите количество пассажиров: ";
    cin >> n;

    Baggage* passengers = new Baggage[n];

    for (int i = 0; i < n; ++i) {
        cout << "Пассажир #" << i + 1 << " — количество вещей и общий вес: ";
        cin >> passengers[i].count >> passengers[i].weight;
    }

    cout << "Данные о багаже:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Пассажир #" << i + 1 << ": " << passengers[i].count << " вещей, " << passengers[i].weight << " кг\n";
    }

    delete[] passengers;
    return 0;
}
