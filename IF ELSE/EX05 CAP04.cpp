//EX05 CAP04
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    float a,b,c,d,x,x1,x2;

    cout << "Entre com o primeiro valor: "; cin >> a ;
    cin.ignore(80, '\n');

    cout << "Entre com o segundo valor: ";cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre com o terceiro valor: ";cin >> c;
    cin.ignore(80, '\n');

    cout << endl;
    if((a=0)&&(b=0)&&(c=0))
        cout << "Não é uma equação completa de segundo grau...";
    else
    {
        d = pow(b, 2) - 4 * a * c;

        if(d = 0)
            {
            x = -b / (2 * a);
            cout << "O valor de x é: " << x << endl;
            }
        else
        {
            if(d > 0)
                {
                x1 = (-b+sqrt(d))/(2*a);
                x2 = (-b-sqrt(d))/(2*a);
                cout << "O valor de X1 é: " << x1 << endl;
                cout << "O valor de X2 é: " << x2 << endl;
                }
            else
            cout << "Não existem raizes reais.";
        }
    }
    cout << endl;
    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();
    return 0;
}
