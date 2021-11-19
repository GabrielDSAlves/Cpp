//EX11 CAP04

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int n;

    cout << "Entre com um valor de 1 a 9: ";cin >> n;
    cin.ignore(80, '\n');

    if(n >=1 && n <=9)
        cout << "\nO valor está na faixa permitida...\n";
    else
        cout << "\nO valor está fora da faixa permitida...\n ";

    cout << endl;
    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
