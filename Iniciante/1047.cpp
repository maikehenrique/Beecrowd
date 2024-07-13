#include <iostream>
using namespace std;

int main () {
    int h1, m1, m2, h2, tempin, tempfin, dife, horas, minutos;
    cin >> h1 >> m1 >> h2 >> m2;
    tempin = (h1 * 60) + m1;
    tempfin = (h2 * 60) + m2;
    dife = tempfin - tempin;
    if(tempin < tempfin){
        horas = dife / 60;
        minutos = dife % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
        return 0 ;
    } else if (tempin >= tempfin){
        dife = dife + (24*60);
        horas = dife/60;
        minutos = dife % 60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
    return 0;
}