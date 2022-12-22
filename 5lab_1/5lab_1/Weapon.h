#pragma once
#include <iostream>
using namespace std;

class Weapon
{
	friend class MagicWeapon;
private:
	string name;
	int weight;
	int damage;
	int weaponType;
public:
	Weapon(string name, int weight, int damage, int weaponType);
	Weapon();
	string get_name();
	int get_weight();
	virtual int get_damage();
	int get_weaponType();
	bool operator >(Weapon& otherWeapon) {
		return this->get_damage() > otherWeapon.get_damage();
	}
	bool operator <(Weapon& otherWeapon) {
		return this->get_damage() < otherWeapon.get_damage();
	}
};

enum class EnWeapon
{
	ONEHANDED=0, 
	TWOHANDED=1, 
	BOW=2, 
	CROSSBOW=3
};

