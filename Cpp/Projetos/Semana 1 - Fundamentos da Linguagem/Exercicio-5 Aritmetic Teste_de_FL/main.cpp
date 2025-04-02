#include <iostream>

using namespace std;

int main( void ){

    int numero1;
    int numero2;


    cout << "Please, insert your number, and see the media: ";

    cin >> numero1;
    cin >> numero2;

    cout << "The Sum is: " << numero1+numero2 << endl;
    cout << "The Subtraction is: " << numero1-numero2 << endl;
    cout << "The Division is: " << numero1/numero2 << endl;
    cout << "The Multiplication is: " << numero1*numero2 << endl;

    return EXIT_SUCCESS;
}