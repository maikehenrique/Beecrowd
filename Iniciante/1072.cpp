
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int v[n], i, in = 0, out = 0;
    for( i = 0;i < n; i++){
        cin >> v[i];
        if(v[i] >= 10 && v[i] <= 20){
            in++;
        } else
            out++;
    }
    printf("%.0d in\n",in);
    printf("%.0d out\n",out);
    return 0;
}
