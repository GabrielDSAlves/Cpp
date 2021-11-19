//EX14 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a,b,c,r;

    cout << "Entre com o primeiro valor: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o segundo valor: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre com o terceiro valor: "; cin >> c;
    cin.ignore(80, '\n');

    r = a + b + c;

    if(r >= 100)
        cout << "\nA soma dos valores fornecido será: " << r << endl;

    cout << endl;
    cout << "Tecle <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
    }
