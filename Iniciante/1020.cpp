#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int i, ano, resa, mes, resm, dia, resd;
    cin >> i;
    ano = i/365 ;
    resa = i%365;
    mes = resa/30;
    resm = resa%30;
    dia = resm;
    cout << fixed << setprecision(1) << ano << " ano(s)" << endl;
    cout << fixed << setprecision(1) << mes << " mes(es)" << endl;
    cout << fixed << setprecision(1) << dia << " dia(s)" << endl;
    
    return 0;
}
