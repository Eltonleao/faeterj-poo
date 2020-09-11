/*
Implemente a Ordenação por Seleção para arranjos de números inteiros de tamanho n. Use o seguinte protótipo: void ordena(int* vetor, int n); Mande uma imagem da tela com seu código, e teste o seu código com os seguintes arranjos:

a) 99
b) 47, 89, 94, 33, 57
c) 30, 86, 72, 25, 48, 67, 24, 75, 59, 64, 45, 40, 81, 97, 88
d) 32, 33, 41, 42, 49, 52, 57, 70, 77, 79, 82, 87, 89
e) 89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32
*/
#include <iostream>

using namespace std;

int main(){
    int vetor[] = {5,2,3,1,4};
    int tamanho_do_meu_vetor = 5;
    int indice_do_menor;
    int variavel_temporaria;

    for(int i=0; i<tamanho_do_meu_vetor-1; i++){
        indice_do_menor = i;
        for(int j = i+1; j<=tamanho_do_meu_vetor; j++){
            if(vetor[j] < vetor[indice_do_menor]){
                indice_do_menor = j;
            }
        }
        variavel_temporaria = vetor[i];
        vetor[i] = vetor[indice_do_menor];
        vetor[indice_do_menor] = variavel_temporaria;
    }

    for (int i=0; i<5; i++){
        cout << vetor[i];
    }
}