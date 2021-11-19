#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int I, S;

int main(void)
{

    S = 0;

    for(I = 1; I <= 100; ++I)
    {
        S += I;
    }
    cout << "A soma dos 100 primeiros numeros naturais será..." << S << endl;
    cout << endl;

    cout << "Aperte a tecla enter para encerrar...";
    cin.get();
    return 0;
}
