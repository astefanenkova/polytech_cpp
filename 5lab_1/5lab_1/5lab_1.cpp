#include <iostream>
#include"Weapon.h"
#include"MagicWeapon.h"
using namespace std;

int main()
{
    struct Player 
    {
        int id;
        string login;
        string password;
        void Output() 
        {
            cout << "ID: " << id << endl;
            cout << "Логин: " << login << endl;
            cout << "Пароль: " << password << endl;
        }
    };

    Weapon ak12("ak12", 3, 10, 10);
    Weapon ak47("ak47", 4, 9, 10);
    setlocale(LC_ALL, "");
    Weapon weap1("Первое оруж.", 6, 10, 2);
    if (weap1.get_weaponType() == (int)EnWeapon::ONEHANDED)
        cout << "Одноручное оружие" << endl;
    else if (weap1.get_weaponType() == (int)EnWeapon::TWOHANDED)
        cout << "Двуручное оружие" << endl;
    else if (weap1.get_weaponType() == (int)EnWeapon::BOW)
       cout << "Лук" << endl;
    else if (weap1.get_weaponType() == (int)EnWeapon::CROSSBOW)
        cout << "Арбалет" << endl;

    Player player = { 76851, "Arthas", "123456789qwert" };
    player.Output();

    MagicWeapon mw("none", 3, 6, 0, 20);
    MagicWeapon mw2("none", 3, 6, 0, 10);
    cout << mw.get_name()<< endl << mw.get_weight()<< endl 
        << mw.get_damage()<< endl << mw.get_weaponType() << endl 
        << mw.get_extradamage() << endl;

}

