
#include <iostream>
using namespace std;

int main () {
    int valor, i;
    cin >> valor;
    for(i = 0; i <= valor; i++){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
    }
 
    return 0;
}
