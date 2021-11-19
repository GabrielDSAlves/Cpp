//EX09 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a, b, c, d, e, vmaior, vmenor;

    cout << "Entre com o primeiro valor: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o segundo valor: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre com o terceiro valor: "; cin >> c;
    cin.ignore(80, '\n');

    cout << "Entre com o quarto valor: "; cin >> d;
    cin.ignore(80, '\n');

    cout << "Entre com o quinto valor: "; cin >> e;
    cin.ignore(80, '\n');

    vmaior = a;

    if  (vmaior < b)
        vmaior = b;

    if (vmaior < c)
        vmaior = c;

    if (vmaior < d)
        vmaior = d;

    if (vmaior < e)
        vmaior = e;

    vmenor = a;

    if(vmenor > b)
        vmenor = b;

    if (vmenor > c)
        vmenor = c;

    if(vmenor > d)
        vmenor = d;

    if (vmenor > e)
        vmenor = e;

    cout << "\nO maior valor é: " << vmaior << endl;
    cout << endl;

    cout << "O menor valor é: "<< vmenor << endl;
    cout << endl;

    cout << endl;
    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
