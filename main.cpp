#include <iostream>
#include <cstdlib>
#include "Empresa.h"

using namespace std;

int main()
{
    string funcio;
    float salr;
    float aju;
    cout << "Digite o nome da Empresa:" << endl;
    string empresa;
    cin >> empresa;
    cout << "Digite o CNPJ da Empresa:" << endl;
    string CNPJ;
    cin >> CNPJ;
    Empresa Empresa_t (empresa,CNPJ);
    while (1){
        int i=0;
        system("cls");
        cout << "------------------------" << endl;
        cout << "Empresa: " << empresa << endl;
        cout << "(1) Contratar " << endl;
        cout << "(2) Demitir " << endl;
        cout << "(3) Ajustar Salarios " << endl;
        cout << "(4) Imprimir Folha de Pagamento " << endl;
        cout << "(0) Terminar Programa " << endl;
        cin >> i;

        switch (i){
            case 1:
                cout << "Digite nome Funcionario" << endl;
                cin >> funcio;
                cout << "Digite Salario Funcionario" << endl;
                cin >> salr;
                Empresa_t.contratar(funcio,salr);
                break;
            case 2:
                cout << "Digite nome Funcionario" << endl;
                cin >> funcio;
                Empresa_t.demitir(funcio);
                break;
            case 3:
                cout << "Digite Ajuste Porcentual" << endl;
                cin >> aju;
                Empresa_t.ajustarSalario(aju);
                break;
            case 4:
                Empresa_t.folhaPagamento();
                break;
        }
        if (i==0)
            break;
        system("pause");

    }
    return 0;
}
