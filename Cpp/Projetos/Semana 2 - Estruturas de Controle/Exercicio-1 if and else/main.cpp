#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Insert a number: ";
    cin >> numero;

    if(numero % 2 == 0){
        cout << "The number is even";
    }
    else{
        cout << "The number is odd";
    }

    return EXIT_SUCCESS;
}