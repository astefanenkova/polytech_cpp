#include <iostream>
using namespace std;

int c,n = 0;
int sum = 0;
int k,k1,k2 = 0;

int numb(int result, int n=1)
{
	cin >> n;
	result = 0;
	if (n <= 0)
		result = 0;
	else
		result = (1 + n) * n / 2;
	return result;
}

void numbers(int a, int b, int& a1, int& b1)
{
	a1 = a + b;
	b1 = a * b;
}

int main()
{
	
	setlocale(LC_ALL, "");
	int array[][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array[i][j] << " ";
			c += array[i][j];
		}
		cout << "\n";
	}
	cout << "Cуммa всех чисел созданного массива = " << c << "\n";
	
	for (int j = 0; j < 3; j++)
	{
		sum = 0;
		for (int i = 0; i < 2; i++)
		{
			sum += array[i][j];
		}
		k = sum;
		if (k2 == 0) 
		{
			k2 = k;
		}
		else if (k1==0)
		{
			k1 = k;
		}
	}

	int arr[3] = { k2,k1,k };
	cout << "Новый массив: " << "\n";
	for (int j = 0; j < 3; j++)
	{
		cout << arr[j] << " ";
	}
	
	float b = 20.84;
	float& reb = b;
	float& refb = b;
	refb = 15.67;

	cout << "\n" << "Переменная = " << b<< "\n";
	cout << "Ссылка на переменную = " << reb << "\n";

	int sum1;
	cout << "Введите число" << "\n";
	sum1 = numb(n);
	cout << "Возвращает 0, если число 0 или отрицательное, либо сумму чисел от 1 до данного числа, если оно положительное: " << sum1 << "\n";

	int a1, b1 = 0;
	int x = 5;
	int y = 5;
	numbers(x, y,a1,b1);
	cout << "a1 = " << a1 << "\n";
	cout << "b1 = " << b1 << "\n";

	int d = 5;
	cout<< d << "\n";
	for (int i = 0; i < 3; i++)
	{
		int d1 = 10;
		cout << d << "\n";
		cout << d1 << "\n";
	}
}


