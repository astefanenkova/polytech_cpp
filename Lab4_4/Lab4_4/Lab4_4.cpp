#include <iostream>
#include "Weapon.h"
using namespace std;

int MyMath::x = 0;
int main()
{

	Weapon ak12("ak12", 3, 10, 10);
	cout << ak12.get_name() << " " << ak12.get_weight() << " " << ak12.get_damage() << " " << ak12.get_maxWeight() << endl;
	cout << "1 = true, 0 = false:  " << ak12.check(ak12.get_weight(), ak12.get_maxWeight()) << endl;

	cout << ak12.applyWeight(3) << endl;

	Weapon* ak47 = new Weapon("ak47", 4, 9, 10);
	cout << ak47->get_name() << " " << ak47->get_weight() << " " << ak47->get_damage() << " " << ak47->get_maxWeight() << endl;
	delete ak47;

	cout << ak12.setDamage(100) << endl;

	Charasteristics weap(100);
	cout << weap.GetDamage(ak12) << endl;

	double x1 = 10;
	double x2 = 5;
	cout << "x1 = "<< x1 << " x2 = " << x2 << endl;
	cout << "x1+x2 = " << MyMath::Add(x1, x2) << endl;
	cout << "x1-x2 = " << MyMath::Sub(x1, x2) << endl;
	cout << "x1*x2 = " << MyMath::Mult(x1, x2) << endl;
	cout<< "x1/x2 = " << MyMath::Div(x1, x2) << endl;
	cout << "proverka statich per = " << MyMath::x << endl;
}
