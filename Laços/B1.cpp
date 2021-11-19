#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int R, N, I;

int main(void)
{

    cout << "Entre com um numero: "; cin >> N;
    cin.ignore(80, '\n');

    I = 1;

    while(I <= 10)
        {
        R = N * I;
        cout << N << " X " << I << " = " << R << endl;
        ++I;
        }

        cout << endl;
        cout << "Aperte a tecla <ENTER> para encerrar....";
        cin.get();

        return 0;
}
