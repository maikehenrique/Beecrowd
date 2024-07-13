#include <iostream>

using namespace std;

int main () {
    int temp, h, resh, m, resm, seg;
    cin >> temp;
    h = temp / 3600;
    resh = temp % 3600;
    m = resh / 60;
    resm = resh % 60;
    temp = resm;
    printf("%.1d:%.1d:%1.d\n",h ,m ,temp);
    return 0;
}
