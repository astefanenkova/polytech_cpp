#include <iostream>
#include"Weapon.h"
#include"MagicWeapon.h"
#include"DisposableWeapon.h"
#include "Hold.h"
using namespace std;

int main()
{
    int x;
    setlocale(LC_ALL, "");
    MagicWeapon mw("none", 3, 6, 0, 20);
    mw.Attack();

    DisposableWeapon dw;
    dw.Attack();
    dw.Attack();

    Hold <DisposableWeapon, int> hold(dw, 12);
    hold.getLeftHandWeapon().Attack();
    cout << hold.getRightHandWeapon() << endl;
    cin >> x;


}
