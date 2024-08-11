#include <iostream>
#include <cstring>  // Para usar strcmp

using namespace std;

int main()

{
    char cargo[51]; // Vetor para armazenar o cargo (m�ximo de 50 caracteres + 1 para o terminador nulo)
    double salario, novoSalario, aumento;

    // Tabela de aumentos conforme o cargo
    const double aumentoGerente = 0.10; // 10%
    const double aumentoSupervisor = 0.08; // 8%
    const double aumentoAnalista = 0.06; // 6%
    const double aumentoOutro = 0.05; // 5% para cargos n�o especificados

    // Leitura do salario e do cargo
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cin.ignore(); // Ignora o caractere de nova linha deixado no buffer

    cout << "Digite o cargo do funcionario (Gerente, Supervisor, Analista): ";
    cin.getline(cargo, 51);

    // Determinar o aumento com base no cargo
    if (strcmp(cargo, "Gerente") == 0)
    {
        aumento = aumentoGerente;
    }
    else if (strcmp(cargo, "Supervisor") == 0)
    {
        aumento = aumentoSupervisor;
    }
    else if (strcmp(cargo, "Analista") == 0)
    {
        aumento = aumentoAnalista;
    }
    else
    {
        aumento = aumentoOutro;
    }

    // Calcular o novo sal�rio
    novoSalario = salario * (1 + aumento);

    // Calcular a diferen�a
    double diferenca = novoSalario - salario;

    // Mostrar o sal�rio antigo, o novo sal�rio e a diferen�a
    cout << "Salario antigo: R$ " << salario << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    cout << "Diferenca: R$ " << diferenca << endl;

    return 0;
}
