#include <iostream>
#include <math.h>

using namespace std;

int main () {
    double a, b, c, delt, basp1, basp2, x1, x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    delt = pow(b,2) -4*a*c;
    if (delt < 0){
        printf("Impossivel calcular\n");
        return 0;
    };

    basp2 = 2*a;
    if(basp2 == 0){
        printf("Impossivel calcular\n");
        return 0;
    };
    x1 = (-b + sqrt(delt))/(basp2);
    x2 =(-b - sqrt(delt))/(basp2);
    printf("R1 = %.5lf\n",x1);
    printf("R2 = %.5lf\n",x2);
    
    return 0 ;
}
