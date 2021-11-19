//EX10 CAP04

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int n,r;

    cout << "Entre com um numero: ";cin >> n;
    cin.ignore(80, '\n');

    r = n%2;

    if (r == 0)
        {
        cout << "\nO valor fornecido é PAR..." << endl;
        cout << "Seu valor é: " << n << endl;
        cout << endl;
        }
    else
        {
        cout << "\nO valor fornecido é IMPAR..." << endl;
        cout << "Seu valor é: " << n << endl;
        cout << endl;
        }
    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
