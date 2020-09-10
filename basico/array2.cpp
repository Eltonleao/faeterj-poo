#include <iostream>

using namespace std;

int * myFunc(){
    static int vet[3];
    vet[0] = 15;
    vet[1] = 22;
    vet[2] = 37;
    return vet;
}

int main(){
    int * var = myFunc();

    for (int i = 0; i<3; i++){
        cout << var[i] << "\n";
    }

}