#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int num_alunos = 5;
    double notas[num_alunos];
    double desvios[num_alunos];
    double desvios_quadrados[num_alunos];
    double soma = 0.0, media, variancia = 0.0, desvio_padrao;

    // Entrada de dados: notas dos alunos

    for (int i = 0; i < num_alunos; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    // Calculando a media das notas

    media = soma / num_alunos;

    // Calculando os desvios e os desvios ao quadrado

    for (int i = 0; i < num_alunos; i++) {
        desvios[i] = notas[i] - media;
        desvios_quadrados[i] = pow(desvios[i], 2);
    }

    // Calculando a variancia

    for (int i = 0; i < num_alunos; i++) {
        variancia += desvios_quadrados[i];
    }
    variancia /= num_alunos;

    // Calculando o desvio padrão

    desvio_padrao = sqrt(variancia);

    // Mostrando os resultados

    cout << "Média das notas: " << media << endl;
    for (int i = 0; i < num_alunos; i++) {
        cout << "Desvio da nota do aluno " << i + 1 << ": " << desvios[i] << endl;
        cout << "Desvio ao quadrado da nota do aluno " << i + 1 << ": " << desvios_quadrados[i] << endl;
    }
    cout << "Variância: " << variancia << endl;
    cout << "Desvio padrão: " << desvio_padrao << endl;

    return 0;
}
