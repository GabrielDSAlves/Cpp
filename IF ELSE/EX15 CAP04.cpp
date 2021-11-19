//EX15 CAP04

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a,r;

    cout << "Entre com um valor inteiro...:"; cin >> a;
    cin.ignore(80, '\n');

    r = a * 2;

    if (r > 30)
        cout << "\nO valor forncecido multiplicado por 2 será...: " << r << endl;
    cout << endl;

    cout << "Tecle <ENTER> para prosseguir..." << endl;
    cin.get();

    return 0;
}
