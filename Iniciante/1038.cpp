#include <iostream>
 
using namespace std;
 
int main () {
    double x , y,tot ;
    cin  >> x  >> y;
    if (x == 1) {
        tot = 4.00 * y;
    } else if(x == 2) {
        tot = 4.50 * y;
    } else if (x == 3) {
        tot = 5.00 * y;
    }else if (x == 4) {
        tot = 2.00 * y;
    }else if (x == 5) {
            tot = 1.50 *y;
    }
    printf("Total: R$ %.2lf\n",tot);
    return 0;
}