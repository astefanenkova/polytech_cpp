#include "Errors.h"
using namespace std;
Errors::Errors(int id)
{
    if (id == OLD)
        cout << "���-�� �� �������...";
    else if (id == NOTBORN)
        cout << "�� ��� �� ��������";
    else if (id == NEGATIVE)
        cout << "�� ����� ������������� �����!";
    else if (id == DEFAULT)
        cout << "�������";
}
