#include <iostream>
#include <windows.h>

using namespace std;

void inputArray(int arr[], int& size) {
    cout << "Введите количество элементов: ";
    cin >> size;
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void outputArray(const int arr[], int size) {
    cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeDuplicates(int arr[], int& size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size;
            } else {
                ++j;
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

    inputArray(arr, size);
    cout << "\nДо удаления повторов:\n";
    outputArray(arr, size);

    removeDuplicates(arr, size);

    cout << "\nПосле удаления повторов:\n";
    outputArray(arr, size);

    return 0;
}
