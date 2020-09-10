// Fibonacci
// próximo = soma dos dois anteriores
// quem sao os dois anteriores?
//

#include <iostream>
using namespace std;
int x = 1;
int y = 2;

int main(){

    for (int i = 0; i <= 10; i++){
        int proximo = x + y;
        x = y;
        y = proximo;
        cout << proximo;
        cout << "\n";
    }
}