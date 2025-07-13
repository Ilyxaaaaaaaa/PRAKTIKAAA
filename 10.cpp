#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

const int PRODUCTS = 3;
const int MONTHS = 12;

void inputData(string names[], int sales[][MONTHS]) {
    for (int i = 0; i < PRODUCTS; ++i) {
        cout << "Введите название продукции #" << i + 1 << ": ";
        cin >> names[i];
        cout << "Введите продажи по месяцам (12 чисел): ";
        for (int j = 0; j < MONTHS; ++j) {
            cin >> sales[i][j];
        }
    }
}

int sumSales(const int* row) {
    int sum = 0;
    for (int i = 0; i < MONTHS; ++i) {
        sum += row[i];
    }
    return sum;
}

int maxMonth(const int* row) {
    int maxIndex = 0;
    for (int i = 1; i < MONTHS; ++i) {
        if (row[i] > row[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string names[PRODUCTS];
    int sales[PRODUCTS][MONTHS];

    inputData(names, sales);

    for (int i = 0; i < PRODUCTS; ++i) {
        int total = sumSales(sales[i]);
        int maxIdx = maxMonth(sales[i]);
        cout << names[i] << ": сумма = " << total << ", максимум в месяце " << (maxIdx + 1) << endl;
    }

    return 0;
}
