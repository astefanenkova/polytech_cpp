#include <iostream>
using namespace std;
namespace Function
{
    void test()
    {
        static int x = 0;
        int y;
        cout << "������� ����� " << "\n";
        cin >> y;
        cout << "C���� ����������� ����� � ����������� ���������� = " << x + y << endl;
        x = y;
    }
}
