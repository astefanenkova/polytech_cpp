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
