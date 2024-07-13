#include <stdio.h>
#include <string.h>

int main () {

    char str[50],str1[50],str2[50];
    int tamanho;
    scanf("%s", str);
    scanf("%s", str1);
    scanf("%s", str2);
    
    if(strcmp(str, "vertebrado") == 0){
        if(strcmp(str1, "ave") == 0 ) {
            if(strcmp(str2, "carnivoro") == 0 ) {
                printf("aguia\n");
            } else
                printf("pomba\n");
                
        } else if (strcmp(str1, "mamifero") == 0) {
            if (strcmp(str2, "onivoro") == 0) {
                printf("homem\n");
            } else 
                printf("vaca\n");
                
        }
    } else if (strcmp(str, "invertebrado") == 0) {
        if(strcmp(str1, "inseto") == 0){
            if(strcmp(str2, "hematofago") == 0) {
                printf("pulga\n");
            } else
                printf("lagarta\n");

        } else if(strcmp(str1, "anelideo") == 0) {
            if(strcmp(str2, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else
                printf("minhoca\n");

        }
    }

    return 0;
}