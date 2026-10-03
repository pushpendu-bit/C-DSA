#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;
   
    m.insert({"kurkure", 20});
    m.insert({"kurkure", 20}); //multimap can store multiple key
    m.emplace("dairy milk", 20);
    m.emplace("dairy milk", 20);
    m.emplace("dairy milk", 20);
    m.emplace("Milk", 39);
    m.emplace("ice cream", 27);
    

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    cout << "total Size are : " << m.size();
    return 0;
}