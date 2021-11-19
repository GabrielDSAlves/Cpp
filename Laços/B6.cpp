#include<iostream>

using std::cin;
using std::endl;
using std::cout;

int N, R, I;


int main(void)
{
    cout << "Entre com um valor: "; cin >> N;
    cin.ignore(80, '\n');
    cout << endl;

    for(I = 1; I <= 10; ++I)
    {
        R = N * I;

        cout << N << " X " << I << " = " << R << endl;
    }

    cout << endl;
    cout << "Aperte a tecla <ENTER> para encerrar....";
    cin.get();
    return 0;
}
