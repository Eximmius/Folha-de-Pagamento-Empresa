#include "Funcionario.h"

Funcionario::Funcionario(string nome, float salario):m_nome(nome),m_salario(salario)
{
    //ctor
}

string Funcionario::getNome (void){
    return m_nome;
}

void Funcionario::reajusteSalario (float porcentual){
    m_salario = m_salario*(1+porcentual/100);
}

float Funcionario:: SalarioLiq (void){
    if (m_salario>=2000)
        return m_salario*0.85;
    else if (m_salario>1500)
        return m_salario*0.93;
    else if (m_salario>1000)
        return m_salario*0.95;
    else
        return m_salario;
}

float Funcionario:: SalarioBru (void){
    return m_salario;
}
