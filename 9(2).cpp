#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <windows.h>
using namespace std;

string removeWordByIndex(const string& line, int m) {
    istringstream iss(line);
    ostringstream oss;
    string word;
    int index = 1;

    while (iss >> word) {
        if (index != m) {
            oss << word << " ";
        }
        ++index;
    }

    string result = oss.str();
    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    ifstream inFile("F1.txt");
    ofstream outFile("F2.txt");

    if (!inFile || !outFile) {
        cout << "Ошибка открытия файлов." << endl;
        return 1;
    }

    int m;
    cout << "Введите номер слова для удаления: ";
    cin >> m;

    string line;
    while (getline(inFile, line)) {
        string newLine = removeWordByIndex(line, m);
        outFile << newLine << endl;
    }

    inFile.close();
    outFile.close();

    cout << "Обработка завершена. Результат записан в F2.txt." << endl;
    return 0;
}
