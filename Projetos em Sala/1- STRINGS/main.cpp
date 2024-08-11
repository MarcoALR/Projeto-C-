#include <iostream>
#include <cstring> // Para usar strcpy, strcmp

using namespace std;

int main() {
    char nome[51]; // Vetor para armazenar cada nome com até 50 caracteres + 1 para o terminador nulo
    char menorNome[51]; // Para armazenar o nome menor encontrado

    // Inicializa menorNome com uma string maior que qualquer nome possível
    strcpy(menorNome, "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    while (true) {
        cout << "Digite um nome (ou pressione Enter para terminar): ";
        cin.getline(nome, 51);

        // Verifica se a linha é nula (ou seja, se o usuário pressionou Enter sem digitar nada)
        if (strlen(nome) == 0) {
            break;
        }

        // Comparar o nome atual com o menor nome encontrado até agora
        if (strcmp(nome, menorNome) < 0) {
            strcpy(menorNome, nome);
        }
    }

    // Verifica se algum nome foi inserido antes de exibir o resultado
    if (strcmp(menorNome, "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~") != 0) {
        cout << "O nome lexicograficamente menor é: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi inserido." << endl;
    }

    return 0;
}
