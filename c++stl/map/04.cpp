#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["chockolet"] = 100;
    m["cake"] = 100;
    m["Cold drinks"] = 100;
    m["thumbsup"] = 100;
    m["Muri"] = 100;

    m.insert({"kurkure", 20});
    m.emplace("chips", 20);
    m.erase("chips");

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    cout << "count = " << m.count("chips") << endl;
    // cout << "count = " << m["chips"] << endl; //if this line executes then the size will be 7 and it will be found.because it creates a default value.

    auto it = m.find("chips");

    if (it != m.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    cout << "Size of m : " << m.size();

    return 0;
}