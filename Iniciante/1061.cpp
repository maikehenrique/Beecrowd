#include <iostream>
using namespace std;

int main () {
    int  d1 , d2, h1, m1, s1, h2, m2, s2, t1, t2,dif;
    scanf("%*s %d", &d1);
    scanf("%d : %d : %d", &h1 , &m1 , &s1);
    scanf("%*s %d", &d2);
    scanf("%d : %d : %d", &h2 , &m2 , &s2);
    t1 = (d1*24*60*60) + (h1*60*60) + (m1*60) + s1;
    t2 = (d2*24*60*60) + (h2*60*60) + (m2*60) + s2;
    dif = t2 - t1;
    d1 = dif /(24*60*60);
    dif = dif % (24*60*60);
    h1 = dif / (60*60);
    dif = dif % (60*60);
    m1 = dif / 60;
    s1 = dif % 60 ;
    printf("%d dia(s)\n", d1);
    printf("%d hora(s)\n",h1);
    printf("%d minuto(s)\n",m1);
    printf("%d segundo(s)\n", s1);
    return 0;
}