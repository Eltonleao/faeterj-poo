/*
Implemente a Ordenação por Borbulhamento para arranjos de números inteiros de tamanho n. Use o seguinte protótipo: void ordenaBorbulhamento(int* vet, int n); Mande uma imagem da tela com seu código, e teste o seu código com os seguintes arranjos:

a) 99
b) 47, 89, 94, 33, 57
c) 30, 86, 72, 25, 48, 67, 24, 75, 59, 64, 45, 40, 81, 97, 88
d) 32, 33, 41, 42, 49, 52, 57, 70, 77, 79, 82, 87, 89
e) 89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32
*/
#include <iostream>

using namespace std;

void ordenaBorbulhamento(int* vetor, int tamanho_vetor){
    int index, bolha, temp;
    for(index = 0; index < tamanho_vetor; index++){
        for(bolha=tamanho_vetor-1; bolha > index; bolha--){
            if(vetor[bolha] < vetor[bolha-1]){
                temp = vetor[bolha];
                vetor[bolha] = vetor[bolha-1];
                vetor[bolha-1] = temp;
            }
        }
    }
}

int showVetor(int* vetor, int tamanho_vetor){
    cout << "e) ";
    for(int i = 0; i < tamanho_vetor; i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";
}

int main(){
    int vetor[] = {89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32};
    int tamanho_vetor = 13;
    ordenaBorbulhamento(vetor, tamanho_vetor);
    showVetor(vetor, tamanho_vetor);
}