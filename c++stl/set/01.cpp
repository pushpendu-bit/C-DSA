#include <iostream>
#include <set>
// value duplicate nhi hota 
// random order mai data arrange karta hai
using namespace std;
void emptyfun(set<int>& s){
    if(s.empty()){
        cout << "set is empt\n";
    } else {
        cout << "Set is not empty\n";
    }
}
int main()
{
    set<int> s;
   
    s.insert(20);
    s.insert(20); //unordered_map can not store multiple key
    s.emplace(20);
    s.emplace(20);
    s.emplace(20);
    s.emplace(39);
    s.emplace(27);
    
    // s.erase(39);

    for (auto x : s)
    {
        cout << x << endl;
    }
    cout << endl;

    auto jon = s.find(39);

    if(jon != s.end()){
        cout << "Found" << endl;
    } else {
        cout << "not found" << endl;
    }

    emptyfun(s);

    cout << "total Size are : " << s.size() << endl;
    cout << "count are : " << s.count(20);

    return 0;
}
