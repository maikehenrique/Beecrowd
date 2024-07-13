#include <iostream>
using namespace std;

int main () {
    int i, j = 0;
    double v[6];
    for(i = 0; i < 6; i++){
        cin >> v[i];
        if(v[i] > 0)
            j++;
    }
    printf("%d valores positivos\n", j);
    return 0;
}