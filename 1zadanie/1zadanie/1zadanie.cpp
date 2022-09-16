#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "First string" << endl;
	cout << "Первая строка\nВторая строка" << endl;
	cout << "Спецсимволы \"\\\"" << endl;
	return 0;
}