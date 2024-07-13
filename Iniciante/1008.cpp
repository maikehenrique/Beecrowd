#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int num;
    double valh, sal, hor;
    cin >> num >> hor >> valh;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << valh * hor << endl;
    return 0;
}