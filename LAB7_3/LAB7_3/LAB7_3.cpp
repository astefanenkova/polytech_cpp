#define _USE_MATH_DEFINES 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
fstream fs;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите радиус окружности:" << endl;
    double r, S;
    string str, chit;
    cin >> r;
    S = 2 * M_PI * r;
    cout << "Длина окружности = " << S << endl;
    cout << "Округлённая длина окружности = " << round(S * 1000 + 0.5) / 1000 << "\n";
    cout << "Введите произвольную строку:" << endl;
    fs.open("task3.txt", ios::out);
    cin >> str;
    cin.get();
    fs << str;
    fs.close();
    cout << "Введите строку для записи в файл или команду read, erase или exit:" << endl;
    while (1) {
        cin >> str;
        if (str == "read")
        {
            fs.open("task3.txt", ios::in);
            fs >> chit;
            cout << chit << endl;
            fs.close();
        }
        else if (str == "erase")
        {
            ofstream ofs;
            ofs.open("task3.txt", ofstream::out | ofstream::trunc);
            ofs.close();
        }
        else if (str == "exit") { break; }
        else
        {
            fs.open("task3.txt", ios::out);
            fs << str;
            fs.close();
        }
    }

}