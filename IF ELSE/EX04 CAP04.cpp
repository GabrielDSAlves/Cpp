//EX04 CAP04
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    float n1,n2,n3,n4,md,ne,md2;

    cout << "Entre com a primeira nota: "; cin >> n1;
    cin.ignore(80, '\n');

    cout << "Entre com a segunda nota: "; cin >> n2;
    cin.ignore(80, '\n');

    cout << "Entre com a terceira nota: "; cin >> n3;
    cin.ignore(80, '\n');

    cout << "Entre com a quarta nota: "; cin >> n4;
    cin.ignore(80, '\n');

    md = (n1 + n2 + n3 + n4)/4;

    cout << "\n";

    if(md >= 7)
        cout << "Aluno aprovado com nota: " << md << endl;
    else
        {
        cout << "Entre com a nota do exame: "; cin >> ne;
        cin.ignore(80, '\n');

        md2 = (ne + md)/2;

            if(md2 >= 5)
                cout << "\nAluno aprovado em exame com nota: " << md2 << endl;
            else
                cout << "\nAluno reprovado com nota: " << md2 << endl;

        }
        cout << endl;
        cout << "Aperte a tecla <ENTER> para prosseguir..." << endl;
        cin.get();
        return 0;
}
