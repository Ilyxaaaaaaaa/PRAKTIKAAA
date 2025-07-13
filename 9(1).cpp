#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int countPunctuation(const string& str) {
    int count = 0;
    string punctuation = ".,?!:;\"'-()";
    for (char ch : str) {
        if (punctuation.find(ch) != string::npos) {
            ++count;
        }
    }
    return count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    int result = countPunctuation(text);
    cout << "Количество знаков препинания: " << result << endl;

    return 0;
}
