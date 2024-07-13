#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    double a, b, c, trire, circ, trap, quad, ret;
    cin >> a >> b >> c;
    trire = (a*c)/2;
    circ = 3.14159*pow(c,2);
    trap = ((a+b)*c)/2;
    quad = b*b;
    ret = a*b;
    cout << "TRIANGULO: "  << fixed << setprecision(3) << trire << endl;
    cout << "CIRCULO: "  << fixed << setprecision(3) << circ << endl;
    cout << "TRAPEZIO: "  << fixed << setprecision(3) << trap << endl;
    cout << "QUADRADO: "  << fixed << setprecision(3) << quad << endl;
    cout << "RETANGULO: "  << fixed << setprecision(3) << ret << endl;
    return 0;
}