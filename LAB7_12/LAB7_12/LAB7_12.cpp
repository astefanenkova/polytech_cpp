#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

bool isValidName(string s3)
{
    regex reg("(?=.{2,32}$)[A-Z][A-Za-z]");
    return regex_search(s3, reg);
}

int main()
{
    setlocale(LC_ALL, "");
    string s1, s2, s3, s4;

    cout << "Введите строку: ";
    cin >> s1;
    if (s1.size() > 3)
        cout << s1.substr(1, 3) << endl;
    else
        cout << "Меньше 4" << endl;;
    int index = s1.find("a");
    s2 = to_string(index);
    if (s2 == "-1")
        cout << "Символа a не найдено" << endl;
    else
        cout << s2 << endl;

    cout << "Введите свое Имя: ";
    cin >> s3;
    if (!isValidName(s3)) {
        cout << "Неккоректно введено имя" << endl;
    }

    cout << "Введите строку с @ адресом:" << endl;
    s4 = "soecks dknds@mail. ru selkfvhe@mail.ru ejfhefgmail.com";
    smatch matches;
    regex reg("[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}");
    while (regex_search(s4, matches, reg))
    {
        cout << matches[0] << endl;
        s4 = matches.suffix().str();
    }

}