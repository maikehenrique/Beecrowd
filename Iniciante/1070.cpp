
#include <iostream>
using namespace std;

int main () {
 
    int valor, i = 0;
    cin >> valor;
    while(1) {
       
        if(valor % 2 != 0){
             printf("%d\n",valor);
             i++;
        }
        if(i == 6)
            break;
            
        valor++;
    }
    return 0;
}
