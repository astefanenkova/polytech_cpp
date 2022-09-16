#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
    int x;
    int n, s;
    s = 0;

    cout << "Введите число: ";
    do
    {
        cin >> x;

        if (x>0)
        {
            s += x;
        }
        
    } 
    while (x > 0);

    cout << "Сумма чисел = " << s << endl;

    int A[10];

    for (int i = 0; i < 10; i++) 
    {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> A[i];
    }

    for (int i = 0; i < 10; i++) 
    {
        cout << i+1 <<"ое число массива = "<< A[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0)
        {
            cout << A[i] << "" << endl;
        }

    }
    int s1 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 2 != 0)
        {
            s1 += i;
            cout << s1 << "" << endl;
        }

    }
}
