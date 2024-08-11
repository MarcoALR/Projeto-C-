#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int V1[tamanho];
    int V2[tamanho];

    // Leitura dos 10 elementos para o vetor V1

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i + 1 << " para o vetor V1: ";
        cin >> V1[i];
    }

    // Constru��o do vetor V2 de acordo com a regra especificada

    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;  // �ndice par: multiplica por 5
        } else {
            V2[i] = V1[i] + 5;  // �ndice �mpar: soma 5
        }
    }

    // Exibi��o dos conte�dos dos vetores V1 e V2

    cout << "\nConte�do do vetor V1:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "V1[" << i << "] = " << V1[i] << endl;
    }

    cout << "\nConte�do do vetor V2:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "V2[" << i << "] = " << V2[i] << endl;
    }

    return 0;
}
