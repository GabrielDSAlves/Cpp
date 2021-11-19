#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int S, I, Resto;

int main(void)
{

    S = 0;
    I = 1;

    while (I <= 500)
        {
        Resto = I % 2;
        if (Resto == 0)
            S += I;
        ++I;
        }

        cout << "A somatoria dos valores pares de 1 a 500 será.....: "<< S  << endl;
        cout << endl;

        cout << "Aperte a tecla <ENTER> para encerrar.....";
        cin.get();

        return 0;
}
