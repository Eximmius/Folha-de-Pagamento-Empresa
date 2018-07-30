#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario(string nome = string(),
                    float salario = -1);
        string getNome (void);
        float SalarioLiq (void);
        float SalarioBru (void);
        void reajusteSalario (float porcentual);
    protected:
    private:
        string m_nome;
        float m_salario;
};

#endif // FUNCIONARIO_H
