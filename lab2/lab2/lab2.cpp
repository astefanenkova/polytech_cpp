
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a = 150;
	int b = 5;
	int c = 30;
	int b1 = 3;
	int b2 = 7;
	bool res1;
	bool res2=true;
	bool res3=false;

	cout << a << " - " << b << " = " << a - b << "\n";
	cout << a << " + " << b << " = " << a + b << "\n";
	cout << a << " / " << b << " = " << a / b << "\n";
	cout << c << " * " << b << " = " << c * b << "\n";

	cout << "b%c = " << b % c << "\n";

	cout << (((145 -100/20)/20)*50)+45 << "\n";

	res1 = b1 && b2;
	cout << res1 << "\n";
	res1 = b1 || b2;
	cout << res1 << "\n";
	res1= !b1;
	cout << res1 << "\n";

	int y = b1 << 1;
	cout << "y = " << y << "\n";
	int z = b1 >> 1;
	cout << "z = " << z << "\n";

	res1 = res2 && (res2 && (res2 && res2 || res3) && (res3 || res2 != res3));
	cout << "res 1 = " << res1 << "\n";

	int a1 = 25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)));
	cout << "a = " << a1 << "\n";
}
