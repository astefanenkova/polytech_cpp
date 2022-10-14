#pragma once
#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    int weight;
    int damage;
    int maxWeight;

    Weapon(string name, int weight, int damage, int maxWeight);
 
    ~Weapon();

    bool check(int weight, int maxWeight);

    int applyWeight(int m);

    int applyWeight(Weapon m);

};

