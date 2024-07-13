#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    double r, pi=3.14159,volume;
    cin >> r;
    cout << "VOLUME = " << fixed << setprecision(3) << (4/3.0)*pi*pow(r,3) << endl;
    return 0 ;
}