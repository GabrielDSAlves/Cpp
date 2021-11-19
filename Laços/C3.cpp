#include<iostream>

using std::endl;
using std::cin;
using std::cout;

int S, I;

int main(void)
{

    S = 0;
    I = 1;

    do
    {
    S += I;
    ++I;
    }
    while(!(I > 100));

    cout << "O valor da soma dos valores de 1 a 100 será: " << S << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para encerrar.....";
    cin.get();

    return 0;
}
