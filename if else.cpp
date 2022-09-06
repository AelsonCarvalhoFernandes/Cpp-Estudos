#include <iostream>

using namespace std;

int main(){

    string nome;
    int idade;

    cout << "Qual e o seu nome?"<< endl;
    cin >> nome;
    cout << "Qual e a sua idade?" << endl;
    cin >> idade;
    if(idade <= 18){
        cout << "Voce e menor de idade";
    }else if(idade < 60){
        cout << "Voce e maior de idade";
    }else{
        cout << "Voce e idoso";
    }

    return 0;
}