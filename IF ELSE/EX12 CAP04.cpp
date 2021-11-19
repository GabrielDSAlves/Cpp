//EX12 CAP04

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a;

    cout << "Entre com um valor inteiro qualquer: "; cin >> a;
    cin.ignore(80, '\n');

    if (! (a > 3))
        {
        cout << "\nSeu valor fornecido é menor que 3..." << endl;
        cout << "Seu valor é: "<< a <<endl;
        }

    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
