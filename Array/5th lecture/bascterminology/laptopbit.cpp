#include <iostream>
using namespace std;

//laptop 64-bit hai

int main() {
    char *ch = new char;
    int *p = new int;
    double *d = new double;

    cout << sizeof(ch) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(d) << endl;
}