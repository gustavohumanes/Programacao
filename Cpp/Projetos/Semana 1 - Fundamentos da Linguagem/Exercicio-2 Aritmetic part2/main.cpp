#include <iostream>

using namespace std;

int main( void ){

    int temperatura;

    cout << "Please, insert a temeprature in Celsius: ";
    cin >> temperatura;

    cout << "The temperature in Fireheint it's: " << (temperatura*9)/5+32;

    return EXIT_SUCCESS;
}