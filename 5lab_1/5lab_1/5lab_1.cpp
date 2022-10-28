#include <iostream>
#include"Weapon.h"
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
}

