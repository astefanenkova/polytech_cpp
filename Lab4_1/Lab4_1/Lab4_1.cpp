#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    int weight;
    int damage;

    Weapon()
    {
        name = "ak47";
        weight = 4;
        damage = 9;
    }

    Weapon(string name, int weight, int damage)
    {
        this->name = name;
        this->weight = weight;
        this->damage = damage;
    }
    //Weapon() : Weapon(name, weight, damage) {};
};

int main()
{
    Weapon ak12;
    cout << ak12.name << " " << ak12.weight << " " << ak12.damage << endl;
    Weapon ak47 = Weapon("ak12", 3, 10);
    cout << ak47.name << " " << ak47.weight << " " << ak47.damage<< endl;
    
}
