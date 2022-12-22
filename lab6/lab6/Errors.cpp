#include "Errors.h"
using namespace std;
Errors::Errors(int id)
{
    if (id == OLD)
        cout << "Что-то не верится...";
    else if (id == NOTBORN)
        cout << "Вы ещё не родились";
    else if (id == NEGATIVE)
        cout << "Вы ввели отрицательное число!";
    else if (id == DEFAULT)
        cout << "Спасибо";
}
