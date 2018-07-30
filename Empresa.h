#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <list>
#include "Funcionario.h"

class Empresa
{
    public:
        Empresa(string nome = string (),
                 string CNPJ = string (),
                 list<Funcionario> Funcionarios = list<Funcionario>()
                );
        void contratar (string pessoa, float salario);
        void demitir (string pessoa);
        void ajustarSalario (float porcentual);
        void folhaPagamento (void);
    protected:
    private:
        string m_Nome;
        string m_CNPJ;
        list <Funcionario> m_Funcionarios;
};

#endif // EMPRESA_H
