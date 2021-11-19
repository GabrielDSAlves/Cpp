//EX06 CAP04.cpp
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)

{
    int a,b,c,x;

    cout << "Entre com o primeiro valor: "; cin >> a;
    cin.ignore(80,'\n');

    cout << "Entre com o segundo valor: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre com o terceiro valor: "; cin >> c;
    cin.ignore(80, '\n');

    if(a>b)
        {
        x = a;
        a = b;
        b = x;
        }
    if(a>c)
        {
        x = a;
        a = c;
        c = x;
        }
    if(b>c)
        {
        x = b;
        b = c;
        c = x;
        }
    cout << endl;
    cout << "Os valores do menor para o maior são: " << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();
    return 0;
}
