#include <iostream>
#include <string>

using namespace std;


int main(){
    string food = "hamburguer";
    string &meal = food;

    cout << meal;
}