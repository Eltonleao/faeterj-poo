#include <iostream>

using namespace std;

void myFunc(int vetor[]){
    vetor[0] = 42;
}

int main(){
    int vetor[3] = {1,2,3};
    myFunc(vetor);
    
    for (int i = 0; i< 3; i++){
        cout << vetor[i] << "\n";
    }
}