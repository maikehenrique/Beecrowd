#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int a, b, c, maiorab;
    cin >> a >> b >> c;
    maiorab = (a+b+abs(a-b))/2;
    maiorab = (c + maiorab+abs(maiorab-c))/2;
    cout << maiorab << " eh o maior" << endl;
    return 0;
}