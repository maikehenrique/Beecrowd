#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double total, sf, vef;
    string nome;
    cin >> nome;
    cin >> sf >> vef;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << sf+(vef*0.15) << endl;
    return 0;
}