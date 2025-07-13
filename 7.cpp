#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

const int N = 5;
const float TOLERANCE = 0.5;

bool isCylindrical(float bottom, float center, float top) {
    return fabs(bottom - center) <= TOLERANCE &&
           fabs(center - top) <= TOLERANCE &&
           fabs(bottom - top) <= TOLERANCE;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float bottom[N] = {10.1, 9.9, 10.0, 8.5, 10.2};
    float center[N] = {10.0, 10.1, 9.8, 8.6, 10.3};
    float top[N]    = {10.2, 9.8, 10.1, 8.7, 10.1};

    for (int i = 0; i < N; ++i) {
        cout << "Деталь " << i + 1 << ": ";
        cout << "Нижнее основание = " << bottom[i] << ", ";
        cout << "Центр = " << center[i] << ", ";
        cout << "Верхнее основание = " << top[i] << " -> ";

        if (isCylindrical(bottom[i], center[i], top[i])) {
            cout << "Форма равномерная" << endl;
        } else {
            cout << "Форма искажённая" << endl;
        }
    }

    return 0;
}
