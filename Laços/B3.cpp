#include<iostream>

using std::endl;
using std::cin;
using std::cout;

int n, i, r;


int main(void)
{
    cout << "Entre com um valor: "; cin >> n;
    cin.ignore(80, '\n');

    i = 1;

    do
    {
        r = n * i;
        cout << n << " X " << i << " = " << r << endl;
        ++i;
    }
    while(!(i>10));

    cout << endl;
    cout << "Aperte a tecla <ENTER> para encerrar...";
    cin.get();
    return 0;
}
