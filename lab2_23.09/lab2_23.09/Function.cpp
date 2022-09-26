#include <iostream>
using namespace std;
namespace Function
{
    void test()
    {
        static int x = 0;
        int y;
        cout << "¬ведите число " << "\n";
        cin >> y;
        cout << "Cумма переданного числа и статической переменной = " << x + y << endl;
        x = y;
    }
}
