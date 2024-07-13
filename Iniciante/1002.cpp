#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r, area;
    cin >> r;
    area = (r * r) * 3.14159 ;
    cout << "A="<< fixed << setprecision(4) << area << endl;
    return 0;
}