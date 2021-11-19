#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int S, I, resto;

int main(void)
{

    S = 0;
    I = 1;

    do
    {
        resto = I % 2;
        if(resto == 0)
            S += I;
        ++I;
    }
    while(!(I > 500));

    cout << "O somatorio dos valores pares de 1 a 500 será: " << S << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para encerrar...";
    cin.get();
    return 0;
}
