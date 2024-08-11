#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int max_elementos = 10;
    int elementos[max_elementos];
    int num_elementos;

    // Leitura da quantidade de elementos

    cout << "Quantos elementos deseja inserir (máximo 10)? ";
    cin >> num_elementos;

    if (num_elementos < 1 || num_elementos > max_elementos) {
        cout << "Número inválido de elementos." << endl;
        return 1;
    }

    // Leitura dos elementos

    for (int i = 0; i < num_elementos; i++) {
        cout << "Digite o valor do elemento " << i + 1 << ": ";
        cin >> elementos[i];

        if (elementos[i] <= 0) {
            cout << "Por favor, insira um valor inteiro positivo." << endl;
            i--;
             // Refaz a leitura do valor invalido
        }
    }

    // Inicialização para encontrar os 2 maiores elementos

    int maior1 = numeric_limits<int>::min();
    int maior2 = numeric_limits<int>::min();

    // Encontrando os 2 maiores elementos

    for (int i = 0; i < num_elementos; i++) {
        if (elementos[i] > maior1) {
            maior2 = maior1;
            maior1 = elementos[i];
        } else if (elementos[i] > maior2) {
            maior2 = elementos[i];
        }
    }

    // Calculando a soma dos elementos pares em posicoes impares

    int soma_pares_pos_impares = 0;
    for (int i = 1; i < num_elementos; i += 2) {

    // Posicoes impares: i = 1, 3, 5, ...

        if (elementos[i] % 2 == 0) {
            soma_pares_pos_impares += elementos[i];
        }
    }

    // Exibindo os resultados

    cout << "Os dois maiores elementos são: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posições ímpares é: " << soma_pares_pos_impares << endl;

    return 0;
}
