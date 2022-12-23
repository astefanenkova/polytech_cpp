#ifndef DISPOSABLE_WEAPON_H_
#define DISPOSABLE_WEAPON_H_
#include <iostream>
#include "Weapon.h"
using namespace std;
class DisposableWeapon :public Weapon
{
	bool WeaponUsed = false;
	public:
		void Attack() override {
			if (WeaponUsed) {
				cout << "������ ��� ���� ������������" << endl;
			}
			else if (!WeaponUsed) {
				cout << "������� ����������� �������" << endl;
				WeaponUsed = true;
			}
		}
};
#endif

