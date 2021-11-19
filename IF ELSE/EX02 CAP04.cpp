//EX02 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int n;

    cout << "Entre com um valor: ";cin >> n;
    cin.ignore(80, '\n');

    if(n<0)
        n = n * (-1);

    cout << "\n";
    cout << "O valor positivo é: " << n << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();
    return 0;
}
