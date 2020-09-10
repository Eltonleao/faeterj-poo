/*
1. Implemente uma função que indique se um ponto (x, y) está localizado dentro ou fora de um retângulo.O retângulo é definido por seus vértices inferior esquerdo (x0, y0) e superior direito (x1, y1). A função deve ter como valor de retorno verdadeiro, se o ponto estiver dentro do retângulo, e 0 caso contrário, obedecendo ao protótipo:

bool dentro_ret(int x0, int y0, int x1, int y1, int x, int y);
*/

#include <iostream>
#include <stdio.h>

using namespace std;

bool isInArea(int x0, int y0, int x1, int y1, int x, int y){
  if ((x0<=x) && (x1>=x) && (y0<=y) && (y1>=y)){
        return true;
    } else{
        return false;
    }
}

int main(){
    bool result = isInArea(0,0,3,3,1,1);
    cout << result;
}
