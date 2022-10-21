#include "Weapon.h"

Weapon::Weapon(string name, int weight, int damage, int maxWeight)
{
    this->name = name;
    this->weight = weight;
    this->damage = damage;
    this->maxWeight = maxWeight;
}

Weapon::~Weapon()
{
    cout << this->name << " delete!" << endl;
}

bool Weapon::check(int weight, int maxWeight)
{
    if (weight <= maxWeight)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Weapon::applyWeight(int m)
{
    return this->weight + m;
}

int Weapon::applyWeight(Weapon m)
{
    return applyWeight(m.weight);
}

int Weapon::get_weight()
{
    return this->weight;
}

string Weapon::get_name()
{
    return this->name;
}

int Weapon::get_damage()
{
    return this->damage;
}

int Weapon::get_maxWeight()
{
    return this->maxWeight;
}

int Weapon::setDamage(int setdamage)
{
    this->damage = setdamage;
    return this->damage;
}

int Charasteristics::get_strenght()
{
    return this->strength;
}

int Charasteristics::set_strenght(int setstrength)
{
    this->strength = setstrength;
    return this->strength;
}

Charasteristics::Charasteristics(int strength)
{
    this->strength = strength;
}

double MyMath::Add(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 + x2;
}

double MyMath::Sub(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 - x2;
}

double MyMath::Mult(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 * x2;
}

double MyMath::Div(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 / x2;
}
