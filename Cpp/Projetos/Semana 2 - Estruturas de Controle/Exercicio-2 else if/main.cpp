#include <iostream>

using namespace std;

int main(){

    int number1;
    int number2;
    int number3;

    cin >> number1;
    cin >> number2;
    cin >> number3;

    if(number1 == number2 && number2 == number3){
        cout << "All of them is equal";
    }
    else if (number1>number2 && number1>number3 ){
        cout << "Number 1 is the biggest one: " << number1;
    }
    else if (number2>number1 && number2>number3){
        cout << "Number 2 is the biggest one: " << number2;
    }
    else if(number3>number1 && number3>number2){
        cout << "Number 3 is the biggest one: " << number3;
    }
    else{
        if(number1 == number2 ){
            cout << "Number 1 and 2 is equal, and number 3 is not the biggest one";
        }
        else if(number2 == number3){
            cout << "Number 2 and 3 is equal, and number 1 is not the biggest one";
        }
        else if(number1 == number3){
            cout << "Number 3 and 1 is equal, and number 2 is not the biggest one";
        }
    }

    return EXIT_SUCCESS;
}