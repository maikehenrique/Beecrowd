#include <iostream>
using namespace std;

int main () {
    int a, b, tempo;
    cin >> a >> b;
    if(a <=12 && b >= 13){
      tempo = b - a;
    } else if (a >= 13 && b <= 12){
        tempo = ( 24 - a) + b;
    }else if (a == b){
        tempo=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",tempo);
    return 0;
}