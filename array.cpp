#include <iostream>

using namespace std;

int main(){

    int array[5];

    string array2[3] = {"joao", "Maria", "julios"};

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    int array3[5][3];

    array3[0][0] = 5;
    array3[0][1] = 10;
    array3[0][2] = 4;
    array3[1][0] = 6;
    array3[1][1] = 25;
    array3[1][2] = 64;
    array3[2][0] = 15;
    array3[2][1] = 16;
    array3[2][2] = 43;

    for(int i=0; i < size(array); i++){
        cout << array[i] << endl;
    }

    for(int i=0; i < size(array2); i++){
        cout << array2[i] << endl;
    }

    for(int l=0 ; l<size(array3[5]); l++){
        for(int c=0; c<size(array3[3]); c++){
            cout<<array3[l][c]<<endl;
        }
    }

    return 0;
}