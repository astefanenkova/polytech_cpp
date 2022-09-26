#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int x, y;
    char z;
    
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Среднее арифметическое двух чисел: " << (x+y)/2<<endl;
    cout << "Введите знак: +, -, * или / ";
    cin >> z; 
    
     /*if (z == '+') cout << (x + y);
    else if (z == '-') cout << (x - y);
    else if (z == '*') cout << (x * y);
    else if (z == '/') cout << (x / y);
    else cout << "Некорректный ввод"; */
 
    switch (z)
    {
    case('+'):
        cout << (x + y);
        break;
    case ('-'):
        cout << (x - y);
        break;
    case ('*'):
        cout << (x * y);
        break;
    case('/'):
        cout << (x / y);
        break;
    default:
        std::cout << "некорректный ввод";
        break;
    }
    

}

