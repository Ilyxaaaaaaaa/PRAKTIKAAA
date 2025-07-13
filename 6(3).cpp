#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

void generateRandomArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) = rand() % 100;
    }
}

void printArray(int* arr, int size, const string& label) {
    cout << label << ": ";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int extractFiltered(int* src, int size, int* dest) {
    int count = 0;
    for (int i = 0; i < size; i += 2) {
        if (*(src + i) % 2 != 0) {
            *(dest + count) = *(src + i);
            ++count;
        }
    }
    return count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(nullptr));

    const int SIZE = 20;
    int arr[SIZE];
    int filtered[SIZE];

    generateRandomArray(arr, SIZE);
    printArray(arr, SIZE, "Сгенерированный массив");

    int newSize = extractFiltered(arr, SIZE, filtered);
    printArray(filtered, newSize, "Отфильтрованный массив");

    return 0;
}
