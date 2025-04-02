#include <iostream>

using namespace std;

int main( void ){

    int numero1;
    int numero2;
    int numero3 ;


    cout << "Please, insert your number, and see the media: ";

    cin >> numero1;
    cin >> numero2;
    cin >> numero3;

    cout << "The media is: "<< (numero1+numero2+numero3)/3;


    return EXIT_SUCCESS;
}