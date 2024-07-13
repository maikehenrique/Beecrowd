#include <iostream>
using namespace std;

int main () {

    double sal, rest, calc, calc2 ;
    cin >> sal;
    if (sal > 0.00 && sal < 2000.00){
        printf("Isento\n");
    } else if (sal >= 2000.01 && sal <= 3000.00){
        calc = (sal-2000.00) * 0.08;
        printf("R$ %.2lf\n", calc);
    } else if (sal >= 3000.01 && sal <= 4500){
        calc = ((sal-3000)*0.18)+80;
        printf("R$ %.2lf\n", calc);
    } else if (sal > 4500.00){
        calc = ((sal - 4500.00) * 0.28) + 350;
        printf("R$ %.2lf\n", calc);
    }
    
    return 0;
}