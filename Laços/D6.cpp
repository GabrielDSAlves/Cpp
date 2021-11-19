#include<iostream>

using std::endl;
using std::cin;
using std::cout;

int S, I, Resto;

int main (void)
{

    S = 0;

    for(I = 1; I <= 500; ++I)
    {
        Resto = I%2;
        if(Resto == 0)
            S += I;
    }
    cout << "A soma dos valores pares de 1 a 500 será...." << S << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para encerrar....";
    cin.get();
    return 0;
}
