#include <iostream>

using namespace std;

int main () {
    int n100,n50,n20,n10,n5,n2,notas,moe1,moe50,moe25,moe10,moe5,moe1cen,moedas;
    scanf("%d.%d",&notas,&moedas);
    n100= notas / 100;
    notas= notas %100;
    n50= notas / 50;
    notas= notas %50;
    n20= notas / 20;
    notas= notas %20;
    n10= notas / 10;
    notas= notas %10;
    n5= notas / 5;
    notas= notas %5;
    n2= notas / 2;
    notas=notas % 2;
    notas= notas *100;
    moedas= notas +moedas;
    moe1= moedas/100;
    moedas=moedas %100;
    moe50= moedas/50;
    moedas=moedas %50;
    moe25= moedas/25;
    moedas=moedas %25;
    moe10= moedas/10;
    moedas=moedas %10;
    moe5= moedas/5;
    moedas=moedas %5;
    moe1cen= moedas/1;
    moedas=moedas %1;
    printf("NOTAS:\n");
    printf("%.1d nota(s) de R$ 100.00\n",n100);
    printf("%.1d nota(s) de R$ 50.00\n",n50);
    printf("%.1d nota(s) de R$ 20.00\n",n20);
    printf("%.1d nota(s) de R$ 10.00\n",n10);
    printf("%.1d nota(s) de R$ 5.00\n",n5);
    printf("%.1d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",moe1);
    printf("%d moeda(s) de R$ 0.50\n",moe50);
    printf("%d moeda(s) de R$ 0.25\n",moe25);
    printf("%d moeda(s) de R$ 0.10\n",moe10);
    printf("%d moeda(s) de R$ 0.05\n",moe5);
    printf("%d moeda(s) de R$ 0.01\n",moe1cen);
    return 0 ;
}
