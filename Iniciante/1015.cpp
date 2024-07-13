#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    double x1, y1, x2, y2, calc1, calc2, calc3;
    cin >> x1>> y1;
    cin >> x2 >> y2;
    calc1= (x2 - x1);
    calc2= (y2 - y1);
    calc1= pow(calc1,2)+pow(calc2,2);
    calc3= sqrt(calc1);

    cout << fixed << setprecision(4) << calc3 << endl;
    return 0;
}
