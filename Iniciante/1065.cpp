
#include <iostream>
using namespace std;

int main () {
   int i, j = 0, v[5];
    for(i =0 ; i < 5; i++){
        cin >> v[i];
        if(v[i] % 2 == 0){
            j++;
        }
    }
    printf("%d valores pares\n",j);
    return 0;
}
