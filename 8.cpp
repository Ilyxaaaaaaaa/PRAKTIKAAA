#include <iostream>
#include <windows.h>
using namespace std;

const int N = 5;
const int M = 4;

void printMatrix(int** matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void swapRows(int*& row1, int*& row2) {
    int* temp = row1;
    row1 = row2;
    row2 = temp;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int** matrix = new int*[N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[M];
        for (int j = 0; j < M; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }

    cout << "Исходная матрица:\n";
    printMatrix(matrix, N, M);

    int swaps;
    do {
        swaps = 0;
        for (int i = 0; i < N - 1; ++i) {
            if (matrix[i][0] > matrix[i + 1][0]) {
                swapRows(matrix[i], matrix[i + 1]);
                ++swaps;
            }
        }
    } while (swaps > 0);

    cout << "\nОтсортированная матрица:\n";
    printMatrix(matrix, N, M);

    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
