#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Settings
{
private:
    static  map<string, int> Map;
public:
    static void Add(string x, int y)
    {
        Map.insert(pair<string, int>(x, y));
    }
    static int Get(string x)
    {
        return Map[x];
    }
    static void Print()
    {
        for (auto i = Map.begin(); i != Map.end(); i++) {
            cout << i->first << "=" << i->second << endl;
        }
    }
};

void print(vector<float> v) {
    for (float n : v) cout << n << endl;

}
int main()
{
    vector<float> v1;
    v1.push_back(1.3);
    v1.push_back(2.4);
    v1.push_back(1.3);
    v1.push_back(-0.8);
    v1.push_back(-1.);
    print(v1);
    v1[4] = v1[3];
    v1[3] = 10;
    v1.push_back(27);
    v1.pop_back();
    print(v1);

    Settings g;
}