#include <iostream>
#include <vector>

using namespace std;

// Função para imprimir uma matriz

void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int valor : linha) {
            cout << valor << " ";
        }
        cout << endl;
    }
}

// Função para calcular e imprimir a matriz transposta

vector<vector<int>> calcularTransposta(const vector<vector<int>>& matriz) {
    int M = matriz.size();
    int N = matriz[0].size();
    vector<vector<int>> transposta(N, vector<int>(M));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    return transposta;
}

// Função para multiplicar a matriz por um fator K

vector<vector<int>> multiplicarPorFator(const vector<vector<int>>& matriz, int K) {
    int M = matriz.size();
    int N = matriz[0].size();
    vector<vector<int>> resultado(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
    return resultado;
}

// Função para adicionar duas matrizes

vector<vector<int>> adicionarMatrizes(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int M = matriz1.size();
    int N = matriz1[0].size();
    vector<vector<int>> resultado(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return resultado;
}

int main() {
    int M, N, K;

    // Leitura das dimensões da matriz

    cout << "Digite o número de linhas (M <= 20): ";
    cin >> M;
    cout << "Digite o número de colunas (N <= 25): ";
    cin >> N;

    if (M <= 0 || M > 20 || N <= 0 || N > 25) {
        cout << "Dimensões da matriz inválidas." << endl;
        return 1;
    }

    vector<vector<int>> matriz(M, vector<int>(N));

    // Leitura da matriz

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Leitura do fator K

    cout << "Digite o fator K para multiplicação: ";
    cin >> K;

    // Calcular a matriz transposta

    vector<vector<int>> transposta = calcularTransposta(matriz);
    cout << "Matriz Transposta:" << endl;
    imprimirMatriz(transposta);

    // Multiplicar a matriz por K

    vector<vector<int>> multiplicada = multiplicarPorFator(matriz, K);
    cout << "Matriz Multiplicada por " << K << ":" << endl;
    imprimirMatriz(multiplicada);

    // Leitura da segunda matriz

    cout << "Digite os elementos da segunda matriz:" << endl;
    vector<vector<int>> matriz2(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Adição das duas matrizes

    vector<vector<int>> soma = adicionarMatrizes(matriz, matriz2);
    cout << "Soma das duas matrizes:" << endl;
    imprimirMatriz(soma);

    return 0;
}
