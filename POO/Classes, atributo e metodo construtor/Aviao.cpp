#include <iostream>
#include "Aviao.h"

using namespace std;



int main(){
    Aviao *av1= new Aviao(1);

    cout << av1->velmax << av1->tipo << endl;

    system("pause");
    return 0;
}
