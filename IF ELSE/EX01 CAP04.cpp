//EX01 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a,b,dif;

    cout << "Entre com o primeiro valor: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o segundo valor: "; cin >> b;
    cin.ignore(80, '\n');

    if(a > b)
        dif = a - b;
    else
    dif = b - a;

    cout << endl;
    cout << "A diferença do maior para o menor é: " << dif << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();
    return 0;
}
