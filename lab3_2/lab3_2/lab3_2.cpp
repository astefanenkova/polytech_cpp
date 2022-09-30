#include <iostream>
using namespace std;

void Sum(int* begin, int* end) 
{
	int sum = 0;
	for (int* p = begin; p < end; p++)
	{
		sum = sum + *p;
	}
	cout << "Сумма всех элементов массива = " << sum << "\n";
}

int add(int a, int b) 
{
	return a + b;
}

int sub(int a, int b) 
{
	return a - b;
}

int(*choice(char c))(int, int)
{
	switch (c)
	{
	case '+':
		return add;
		break;

	case '-':
		return sub;
		break;

	default:
		return nullptr;
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int array[] = { 1,2,3,4 };
	int length = sizeof(array) / sizeof(*array);
	Sum(array, &array[length]);
	
	cout << "Сумма = " << add(1, 2) << "\n";
	cout << "Разность = " << sub(3, 1) << "\n";
	cout << choice('+')(2, 3) << endl << add(2, 3) << endl;

	float* a = new float;
	*a = 2.2;
	cout << *a << endl;
	delete a;
}
