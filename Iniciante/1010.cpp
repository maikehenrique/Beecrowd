#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int cod1, cod2, qu1, qu2;
    double vl1,vl2,tot;
    cin >> cod1 >> qu1 >> vl1 >> cod2 >> qu2 >> vl2;
    cout << "VALOR A PAGAR: R$ "  << fixed << setprecision(2) << (qu1*vl1)+(qu2*vl2) << endl;
    return 0;
}
