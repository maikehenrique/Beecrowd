
#include <iostream>
using namespace std;

int main () {
    int i, j = 0, v[5], imp = 0, pos = 0, neg = 0;
    for(i=0;i<5;i++){
        cin >> v[i];
        if(v[i]%2==0){
            j++;
        } else
            imp++;
        
        if(v[i] > 0){
            pos++;
        } else if(v[i] < 0){
            neg++;
        }
    
    }
    
    printf("%d valor(es) par(es)\n",j);
    printf("%d valor(es) impar(es)\n",imp);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
