#include "Empresa.h"

Empresa::Empresa(string nome, string CNPJ, list<Funcionario> Funcionarios):
    m_Nome(nome), m_CNPJ(CNPJ),m_Funcionarios(Funcionarios)
{
    //ctor
}

void Empresa::contratar (string pessoa, float salario){
    Funcionario amadeus (pessoa,salario);
    m_Funcionarios.push_front(amadeus);

}

void Empresa::demitir (string pessoa){
    list <Funcionario> :: iterator it1;
    for (it1 = m_Funcionarios.begin();it1!=m_Funcionarios.end(); it1++){
        if (it1->getNome().compare(pessoa)==0){
            m_Funcionarios.erase(it1);
            break;
        }
    }
}

void Empresa::ajustarSalario (float porcentual){
    list <Funcionario> :: iterator it1;
    for (it1 = m_Funcionarios.begin();it1!=m_Funcionarios.end(); it1++){
        it1->reajusteSalario(porcentual);
    }


}

void Empresa::folhaPagamento (void){
    list <Funcionario> :: iterator it1;
    for (it1 = m_Funcionarios.begin();it1!=m_Funcionarios.end(); it1++){
        cout << "<" <<it1->getNome() << ">-<" << it1->SalarioBru() << ">-<" << it1->SalarioLiq() << ">" << endl;
    }
}
