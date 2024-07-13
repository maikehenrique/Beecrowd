#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double a,b,c,a2,b2,c2,maior,medio,menor;
    cin >> a >> b >> c;
    if( a>= b && b >= c){
        maior = a;
        medio = b;
        menor = c;
    } else if (a >= c && c >= b){
        maior = a;
        medio = c;
        menor = b;
    } else if (a >= c && c >= b){
        maior = a;
        medio = c;
        menor = b;
    } else if (b >= a && a >= c){
        maior = b;
        medio = a;
        menor = c;
    } else if (b >= c && c >= a){
        maior = b;
        medio = c;
        menor = a;
    } else if (c >= a && a >= b){
        maior = c;
        medio = a;
        menor = b;
    } else if (c >= b && b >= a){
        maior = c;
        medio = b;
        menor = a;
    };
    a = maior;
    b = medio;
    c = menor;
    a2 = pow(a, 2);
    b2 = pow(b, 2);
    c2 = pow(c, 2);
    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else if (a2 == b2 + c2){
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (a2 > b2 + c2){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (a2 < b2 + c2){
        cout << "TRIANGULO ACUTANGULO" << endl;
    } 
    if (a == b && b == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (a == b || b == c){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}