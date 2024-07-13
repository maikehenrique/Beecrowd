#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double x,y,km ;
    cin >> x >> y;
    km = (x / y) ;
    cout << fixed << setprecision(3) << km << " km/l" << endl;
    return 0;
}