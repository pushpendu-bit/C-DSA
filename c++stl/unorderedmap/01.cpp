#include <iostream>
#include <unordered_map>
// value duplicate nhi hota 
// random order mai data arrange karta hai
using namespace std;
int main()
{
    unordered_map<string, int> m;
   
    m.insert({"kurkure", 20});
    m.insert({"kurkure", 20}); //unordered_map can not store multiple key
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