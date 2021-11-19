//EX07 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a, b, c, d, r2, r3;

    cout << "Entre com o valor para A: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o valor para B: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre com o valor para C: "; cin >> c;
    cin.ignore(80, '\n');

    cout << "Entre com o valor para D: "; cin >> d;
    cin.ignore(80, '\n');

    r2 = a%2;
    r3 = a%3;

    if (r2 == 0 && r3 == 0)
        {
        cout << "\nO valor de A é divisivel por 2 e 3..." << endl;
        cout << "O valor de A é: "<< a << endl;
        cout << endl;
        }

    r2 = b%2;
    r3 = b%3;

    if (r2 == 0 && r3 == 0)
        {
        cout << "\nO valor de B é divisivel por 2 e 3..." << endl;
        cout << "O valor de B é: "<< b << endl;
        cout << endl;
        }

    r2 = c%2;
    r3 = c%3;

    if (r2 == 0 && r3 == 0)
        {
        cout << "O valor de C é divisivel por 2 e 3..." << endl;
        cout << "O valor de C é: "<< c << endl;
        cout << endl;
        }

    r2 = d%2;
    r3 = d%3;

    if (r2 == 0 && r3 == 0)
        {
        cout << "O valor de D é divisivel por 2 e 3..." << endl;
        cout << "O valor de D é: "<< d << endl;
        cout << endl;
        }
    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
