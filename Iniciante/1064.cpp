
#include <iostream>
using namespace std;

int main () {

    int i , j = 0;
    double soma;

    for(i = 0 ; i < 6 ; i++){
       double valor;
       cin >> valor;
        if(valor >= 0){
            soma += valor;
            j++;
        }
    }
    
    soma = soma / j;
    printf("%d valores positivos\n", j);
    printf("%.1lf\n",soma);
    return 0;
}
