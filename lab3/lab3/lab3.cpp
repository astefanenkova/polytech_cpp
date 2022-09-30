#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a = 15;
    int* pointer = &a;
    cout << "Адрес указателя = " << pointer << endl;
    cout << "Значение, которое хранится по этому адресу = " << *pointer << endl;
    *pointer = 20;
    cout << "Новое значение переменной = " << *pointer << endl;

    int Array[][2] = { {1,2},{3,4}, {5,6} };
    int rows = sizeof(Array) / sizeof(Array[0]); 
    int col = sizeof(Array[0]) / sizeof(Array[0][0]); 
    int* end = Array[0] + rows * col - 1;
    cout << "Вывод всех элементов массива в консоль, используя указатель " << endl;
    for (int* p = Array[0], i = 1; p <= end; p++, i++)
    {
        cout << *p << " ";
        if (i % 2 == 0) cout << "\n";
    }


    int a1 = 5;
    int* const pntr = &a1;
    cout << "Значение переменной a1 = " << a1 << "\n";
    cout << "Адрес переменной = " << pntr << "\n";
    *pntr = 30;
    cout << "Новое значение переменной а1 = " << a1 << "\n";
    cout << "Адрес переменной = " << pntr << "\n";
}
