/*
1 - (Eliminação de duplicatas) Utilize um arranjo unidimensional para resolver o
seguinte problema: Escreva um aplicativo que insere cinco números, cada um
entre 10 e 100, inclusive.
À medida que cada número é lido, só o exiba se ele não for uma duplicata de um
número já lido. Cuide de tratar o “pior caso”, em que todos os cinco números são
diferentes. Utilize o menor arranjo possível para resolver esse problema. Exiba o
conjunto completo de valores únicos inseridos depois que o usuário inserir cada
valor novo.*/
#include <iostream>

using namespace std;

void inserirNumeros(int numerosInseridos[]){
    for (int i = 0; i < 5; i++){
        int num;
        cout << "Digite um número entre 10 e 100:"<< "\n:";
        cin >> num;
        if (num > 10 && num < 100){
            numerosInseridos[i] = num;
        }
        else{
            while (num < 10 || num >100){
                cout << "Você digitou errado. É entre 10 e 100:" << "\n:";
                cin >> num;
                if (num > 10 && num < 100){
                    numerosInseridos[i] = num;
                }
            }
        }
    }
}

int checkSeNumeroExisteNoVetor(int numero, int vetor[]){
    int result = 0;
    for(int i=0; i<5; i++){
        if(numero == vetor[i]){
            result = 1;
        }
    }
    return result;
}

void lerNumeros(int numerosInseridos[]){
    int numerosLidos[100];
    int check;
    cout << ".\n.\n.\n";
    for(int i = 0; i<5; i++){
        check = checkSeNumeroExisteNoVetor(numerosInseridos[i], numerosLidos);
        if(check == 0){
            numerosLidos[i] = numerosInseridos[i];
            cout << numerosInseridos[i] << "\n";
        }
    }
}

int main(){
    int numerosInseridos[5];
    inserirNumeros(numerosInseridos);
    lerNumeros(numerosInseridos);
}