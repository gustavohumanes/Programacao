#include <iostream>

using namespace std;

int main( void ){

    //Solicite números ao usuário até que um valor negativo seja inserido. Em seguida, exiba a soma dos valores positivos fornecidos.

    int numero = 0;
    int contador;

    while(numero+1 > 0){

        cin >> contador;
        numero += contador;
        if(contador <= 0){
            cout << "Program stopped, the value of the sum is: ";
            break;
        }
    }

    cout << numero;


    return EXIT_SUCCESS;
}