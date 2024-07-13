#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int n100, n50, n20, n10, n5, n2, n1, notas, notas1;
    cin >> notas1;
    n100 = notas1 / 100;
    notas = notas1 % 100;
    n50 = notas / 50;
    notas = notas % 50;
    n20 = notas / 20;
    notas = notas % 20;
    n10 = notas / 10;
    notas = notas % 10;
    n5 = notas / 5;
    notas = notas % 5;
    n2 = notas / 2;
    notas = notas % 2;
    n1 = notas / 1;
    notas = notas % 1;
    cout << notas1 <<  endl;
    cout << fixed << setprecision(1) << n100 << " nota(s) de R$ 100,00" << endl;
    cout << fixed << setprecision(1) << n50 << " nota(s) de R$ 50,00" << endl;
    cout << fixed << setprecision(1) << n20 << " nota(s) de R$ 20,00" << endl;
    cout << fixed << setprecision(1) << n10 << " nota(s) de R$ 10,00" << endl;
    cout << fixed << setprecision(1) << n5 << " nota(s) de R$ 5,00" << endl;
    cout << fixed << setprecision(1) << n2 << " nota(s) de R$ 2,00" << endl;
    cout << fixed << setprecision(1) << n1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}