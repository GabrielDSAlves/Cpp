//EX03 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    float n1,n2,n3,n4,md;

    cout << "Entre com a primeira nota: ";cin >> n1;
    cin.ignore(80, '\n');

    cout << "Entre com a segunda nota: ";cin >> n2;
    cin.ignore(80, '\n');

    cout << "Entre com a terceira nota: ";cin >> n3;
    cin.ignore(80, '\n');

    cout << "Entre com a quarta nota: ";cin >> n4;
    cin.ignore(80, '\n');

    md = (n1 + n2 + n3 + n4)/4;

    cout << "\n";
    if(md >=5)
        cout << "Aluno aprovado com nota: " << md << endl;
    else
        cout << "Aluno reprovado com nota: " << md << endl;
    cout << endl;

    cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
    cin.get();
    return 0;
}
