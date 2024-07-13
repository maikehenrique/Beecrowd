#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double hr, vm, litro;
    cin >> hr >> vm;
    litro = (vm*hr) / 12;
    cout << fixed << setprecision(3) << litro << endl;
    return 0;
}
