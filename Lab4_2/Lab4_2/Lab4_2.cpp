﻿#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    int weight;
    int damage;
    int maxWeight;
    int* i = new int(5);

    Weapon(string name, int weight, int damage, int maxWeight)
    {
        this->name = name;
        this->weight = weight;
        this->damage = damage;
        this->maxWeight = maxWeight;
    }
    ~Weapon() 
    {
         cout << this->name << " delete!" << endl;
         delete i;
    }

    bool check(int weight, int maxWeight)
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

    void applyWeight(int Weight) 
    {
        weight += Weight;
    }

    void applyWeight() 
    {
        applyWeight(1);
    }
};

int main()
{
   
   Weapon ak12("ak12", 3, 10, 10);
   cout << ak12.name << " " << ak12.weight << " " << ak12.damage<< " " << ak12.maxWeight << endl;
   cout <<"1 = true, 0 = false:  " << ak12.check(ak12.weight, ak12.maxWeight) << endl;

   ak12.applyWeight(4);
   cout << ak12.weight<<endl;

   ak12.applyWeight();
   cout << ak12.weight << endl;

   Weapon* ak47 = new Weapon("ak47", 4, 9, 10);
   cout << ak47->name << " " << ak47->weight << " " << ak47->damage << " " << ak47->maxWeight << endl;
   delete ak47;

 
}