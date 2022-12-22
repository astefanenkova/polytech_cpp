#include <iostream>
#include "Errors.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int number, year;
    cout << "Введите число 1, 2 или 3: ";
    try {
        cin >> number;
        if (number != 1 && number != 2 && number != 3)
            throw "Некорректное значение";
    }
    catch (const char* n)
    {
        cout << n << "\n";
    }

    cout << "Введите дату рождения: ";
    try {
        cin >> year;
        if (year < 1850 && year >= 0)
            throw Errors(Errors::OLD);
        else if (year > 2022)
            throw Errors(Errors::NOTBORN);
        else if (year < 0)
            throw Errors(Errors::NEGATIVE);
        else
            throw Errors(Errors::DEFAULT);
    }
    catch (...) {}
    
}
