#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int S, I;

int main(void)
{

    S = 0;
    I = 1;

    while (I <= 100)
        {
        S += I;
        ++I;
        }

    cout << "O valor da soma dos 100 primeiros numeros naturais será: " << S << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para encerrar....";
    cin.get();
    return 0;
}
