#pragma once
#include <iostream>
using namespace std;

class Weapon
{
private:
    string name;
    int weight;
    int damage;
    int maxWeight;
public:
    Weapon(string name, int weight, int damage, int maxWeight);

    ~Weapon();

    bool check(int weight, int maxWeight);

    int applyWeight(int m);

    int applyWeight(Weapon m);

    string get_name();
    
    int get_weight();
  
    int get_damage();
  
    int get_maxWeight();

    int setDamage(int setdamage);
  
    friend class Charasteristics;
};

class Charasteristics
{
private:
    int strength;

public:
    int get_strenght();
    int set_strenght(int setstrength);
    int GetDamage(Weapon s)
    {
        return this->strength + s.damage;
    }
    Charasteristics(int strength);
};

class MyMath
{
public:
    static int x;

    static double Add(double x1, double x2);

    static double Sub(double x1, double x2);

    static double Mult(double x1, double x2);

    static double Div(double x1, double x2);
};
