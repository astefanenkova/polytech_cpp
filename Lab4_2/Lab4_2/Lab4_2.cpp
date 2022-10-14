#include <iostream>
#include "Weapon.h"
using namespace std;

int main()
{
   
   Weapon ak12("ak12", 3, 10, 10);
   cout << ak12.name << " " << ak12.weight << " " << ak12.damage<< " " << ak12.maxWeight << endl;
   cout <<"1 = true, 0 = false:  " << ak12.check(ak12.weight, ak12.maxWeight) << endl;

   cout << ak12.applyWeight(3) << endl;

   Weapon* ak47 = new Weapon("ak47", 4, 9, 10);
   cout << ak47->name << " " << ak47->weight << " " << ak47->damage << " " << ak47->maxWeight << endl;
   delete ak47;
}