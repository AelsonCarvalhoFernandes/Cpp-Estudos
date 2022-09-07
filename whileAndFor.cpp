#include <iostream>

using namespace std;

int main(){

    int chute;

    while(chute != 3){
        cout << "Digite um numero maior que 2 e menor que 4";
        cin >> chute;
    }

    do{
        cout << "O do executa pelo menos uma vez";
    }
    while(chute !=3);

    for(int i=0; i<100; i++){
        cout << i << endl;
    }
    return 0;
}