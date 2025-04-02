#include <iostream>

using namespace std;

int main(){

    //Solicite um número e exiba sua tabuada de multiplicação de 1 a 10.

    int numero_requisitado;

    cin >> numero_requisitado;

    for(int i = 1; i <= 10; i++ ){
        cout << numero_requisitado << " X " << i << " = " << numero_requisitado*i << endl;
    }

    return EXIT_SUCCESS;
}