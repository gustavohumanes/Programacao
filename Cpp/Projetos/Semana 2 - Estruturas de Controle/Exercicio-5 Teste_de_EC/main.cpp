#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // Solicite um número inteiro positivo e determine se ele é primo ou não.

    int numero;
    bool isPrimo = false;



    cout << "Please, insert a number, and verify if it is prime or not: ";
    cin >> numero;


    //if = Verificando numero se é positivo

    if(numero <= 1) 
    { 
        cout << "Not a prime number";
    }
    else // else = Verificando se é primo
    {
        isPrimo = true;
        for(int i = 2; i <= sqrt(numero); i++)  
        {
            if(numero % i == 0)
            {
                isPrimo = false;
                break;
            }
        }
                                                
    }


    //Imprimindo resultado da verificação if = é primo, else = não é primo
    if(isPrimo){
        cout << "It's prime";
    }
    else{
        cout << "It's not prime";
    }

    return 0;
}