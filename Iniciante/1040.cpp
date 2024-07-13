#include <iostream>
 
using namespace std;
 
int main () {
    double n1, n2, n3, n4, med, med1, exam;
    cin >> n1 >> n2 >> n3 >> n4;
    med = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    if(med >= 7) {
        printf("Media: %.1lf\nAluno aprovado.\n", med);
    } else if(med < 5) {
        printf("Media: %.1lf\nAluno reprovado.\n", med);
    } else if (med >=5 && med <= 6.9) {
       cin >> exam;
        med1 = (med + exam) / 2;
        if (med1 >= 5){
            printf("Media: %.1lf\nAluno em exame.\n", med);
            printf("Nota do exame: %.1lf\n", exam);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", med1);

        } else if (med1 < 5){
            printf("Media: %.1lf\nAluno em exame.\n", med);
            printf("Nota do exame: %.1lf\n", exam);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", med1);
        }
    }
    return 0;
}