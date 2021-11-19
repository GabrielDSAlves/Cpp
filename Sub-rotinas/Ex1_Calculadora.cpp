//Programa calculadora
#include<iostream>
#include<iomanip>
using namespace std;

float r, a, b;

void rotaadicao(void);
void rotasubtracao(void);
void rotamultiplicacao(void);
void rotadivisao(void);
void pausa(void);

int main(void)
{
    int opcao = 0;
    while (opcao != 5)
        {
            cout << setprecision(2);
            cout << setiosflags(ios::right);
            cout << setiosflags(ios::fixed);
            cout << endl << endl;
            cout << "--------------------" << endl;
            cout << "Programa Calculadora" << endl;
            cout << "   Menu Principal   " << endl;
            cout << "--------------------" << endl << endl;
            cout << "[1] - Adição" << endl;
            cout << "[2] - Subtração" << endl;
            cout << "[3] - Multiplicação" << endl;
            cout << "[4] - Divisão" << endl;
            cout << "[5] - Fim do Programa" << endl << endl;
            cout << "Escolha uma opção: "; cin >> opcao;
            cin.ignore(80, '\n');
            if (opcao != 5)
                {
                    switch (opcao)
                        {
                        case 1: rotaadicao();    break;
                        case 2: rotasubtracao();    break;
                        case 3: rotamultiplicacao();  break;
                        case 4: rotadivisao();   break;
                        }
                }
        }
        return 0;
}

  void rotaadicao(void)
{
    cout << endl;
    cout << "  Rotina Adição  " << endl;
    cout << "-----------------" << endl << endl;
    cout << "Entre um valor para [A]: "; cin >> a;
    cin.ignore(80, '\n');
    cout << "Entre um valor para [B]: "; cin >> b;
    cin.ignore(80, '\n');

    r = a + b;

    cout <<"\nO Resultado entre A e B = " << setw(8) ;
    cout << r << endl;
    pausa();
    return;
}

void rotasubtracao(void)
{
    cout << endl;
    cout << " Rotina Subtração " << endl;
    cout << "------------------" << endl << endl;
    cout << "Entre um valor para [A]: "; cin >> a;
    cin.ignore(80, '\n');
    cout << "Entre um valor para [B]: "; cin >> b;
    cin.ignore(80, '\n');

    r = a - b;

    cout << "\nO Resultado entre A e B = " << setw(8) ;
    cout << r << endl;
    pausa();
    return;
}

void rotamultiplicacao(void)
{
    cout << endl;
    cout << " Rotina Multiplicação " << endl;
    cout << "----------------------" << endl << endl;
    cout << "Entre um valor para [A]: "; cin >> a;
    cin.ignore(80, '\n');
    cout << "Entre um valor para [B]: "; cin >> b;
    cin.ignore(80, '\n');

    r = a * b;

    cout << "\nO Resultado entre A e B = " << setw(8) ;
    cout << r << endl;
    pausa();
    return;
}

void rotadivisao(void)
{
    cout << endl;
    cout << " Rotina Divisão " << endl;
    cout << "----------------" << endl << endl;
    cout << "Entre um valor para [A]: "; cin >> a;
    cin.ignore(80, '\n');
    cout << "Entre um valor para [B]: "; cin >> b;
    cin.ignore(80, '\n');
    if (b == 0)
    {
        cout << endl;
        cout << "Erro de divisão" << endl;
    }
    else
    {
    r = a / b;

    cout << "\nO Resultado entre A e B = " << setw(8) ;
    cout << r << endl;
    }
    pausa();
    return;
}

void pausa(void)
{
    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();
    return;
}

