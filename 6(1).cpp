#include <iostream>
#include <windows.h>

using namespace std;

const int ARR_SIZE = 10;

int countOddAtEvenIndexes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i += 2) {
        if (arr[i] % 2 != 0)
            count++;
    }
    return count;
}

int maxEven(int arr[], int size) {
    int maxEven = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > maxEven)
            maxEven = arr[i];
    }
    return maxEven;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[ARR_SIZE] = {3, 12, 7, 4, 9, 8, 11, 6, 5, 2};

    cout << "Исходный массив: ";
    for (int i = 0; i < ARR_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int oddCount = countOddAtEvenIndexes(arr, ARR_SIZE);
    cout << "Количество нечётных элементов на чётных позициях: " << oddCount << endl;

    int maxE = maxEven(arr, ARR_SIZE);
    if (maxE != -1)
        cout << "Наибольшее чётное значение в массиве: " << maxE << endl;
    else
        cout << "В массиве нет чётных чисел." << endl;

    return 0;
}
