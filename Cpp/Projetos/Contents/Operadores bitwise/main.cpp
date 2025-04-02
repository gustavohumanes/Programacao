#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    /*
        OPERADORES BITWISE

        Os bits são uma sucessão de 1 e 0. Quando usamos operadores bitwise, 
        comparamos diretamente esses bits. Aqui estão os operadores bitwise:

        &  ---> "E" bit a bit (1 só se ambos forem 1)
        |  ---> "OU" bit a bit (1 se pelo menos um for 1)
        ^  ---> "XOR" bit a bit (1 se forem diferentes)
        >>= --> Deslocamento de bits para a direita
        <<= --> Deslocamento de bits para a esquerda

        ----EXEMPLOS ABAIXO:----
    */

    /* OPERADOR "&" (E bit a bit) */
    int a = 2;  // 0010
    int b = 3;  // 0011
                // 0010 -> Resultado = 2
    cout << "a & b = " << (a & b) << endl;



    /* OPERADOR "|" (OU bit a bit) */
    int c = 2;  // 0010
    int d = 3;  // 0011
                // 0011 -> Resultado = 3
    cout << "c | d = " << (c | d) << endl;



    /* OPERADOR "^" (XOR bit a bit) */
    int e = 2;  // 0010
    int f = 3;  // 0011
                // 0001 -> Resultado = 1
    cout << "e ^ f = " << (e ^ f) << endl;



    /* OPERADOR ">>=" (Deslocamento para a direita) */
    int g = 8;  // 1000 (8 em binário)
    g >>= 2;    // 0010 -> Resultado = 2
    cout << "g >>= 2 -> " << g << endl;



    /* OPERADOR "<<=" (Deslocamento para a esquerda) */
    int h = 3;  // 0011 (3 em binário)
    h <<= 2;    // 1100 -> Resultado = 12
    cout << "h <<= 2 -> " << h << endl;

    return EXIT_SUCCESS;
}
