#include <iostream>

using  namespace std;

float getNegativos(float vet[], int size){
    float result[size]; 
    int index = 0;
    for(int i=0; i<size; i++){
        if(vet[i] < 0){
            cout << "negativo encontrado: " << vet[i] << "\n";
            result[index] = vet[i];
            index++;
        }
    }

    cout << index << " negativos encontrados "<< endl;
}

int main(){
    float vet[3] = {1,-2,-3};
    getNegativos(vet, 3);
    cout << "fim do programa\n";
}