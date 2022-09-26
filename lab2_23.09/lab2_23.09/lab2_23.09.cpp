#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#define SUM(a,b) (a)+(b)
#include "Function.h"
using namespace Function;

int main()
{
    setlocale(LC_ALL, "");
    test();
    test();
    test();

    int a,b;
    cout << "Введите число a " << "\n";
    cin >> a;
    cout << "Введите число b " << "\n";
    cin >> b;
    cout <<"Сумма двух переданных чисел = " << SUM(a, b) << endl;
}

