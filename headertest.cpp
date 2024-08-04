#pragma once

#include <iostream>
#include <string>
#include <sstream> // Для std::stringstream
#include "Header.h"

using namespace std;

int a, b, ans;

string action;

int summ(int a, int b) {
    return a + b;
}

int min(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return 0; // Или любое другое значение для обработки ошибки
    }
}

void mainfunk(string example) {
    stringstream ss(example); // Создаем поток для разбора строки
    ss >> a >> action >> b; // Читаем первое число, действие и второе число

    // Выполняем действие
    if (action == "+") {
        ans = summ(a, b);
    }
    else if (action == "-") {
        ans = min(a, b);
    }
    else if (action == "*") {
        ans = multiply(a, b);
    }
    else if (action == "/") {
        ans = division(a, b);
    }
    else {
        return;
    }

    cout << ans << endl;
}

int main() {
    string example;

    getline(cin, example); // Считываем всю строку

    mainfunk(example); // Вызываем функцию для обработки строки

    return 0;
}
