#include <iostream>
using namespace std;

int main () {
    double sal,novosal, porc,reaj ;
    cin >> sal;
    if (sal <= 400 ){
        novosal = sal * 1.15;
        reaj =  novosal - sal;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",novosal,reaj);
    } else if( sal <= 800) {
        novosal = sal * 1.12;
        reaj =  novosal - sal;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",novosal,reaj);
    
   } else if(sal <= 1200) {
        novosal = sal * 1.10;
        reaj =  novosal - sal;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",novosal,reaj);
    } else if(sal <= 2000) {
        novosal = sal * 1.07;
        reaj =  novosal - sal;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",novosal,reaj);
        
    }else {
        novosal = sal * 1.04;
        reaj =  novosal - sal;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",novosal,reaj);
    }
    return 0;
}