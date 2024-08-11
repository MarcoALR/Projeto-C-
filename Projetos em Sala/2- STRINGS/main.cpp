#include <iostream>
#include <cstring> // Para usar strlen

using namespace std;

int main() {
    char str1[101]; // Vetor para armazenar a primeira string (máximo de 100 caracteres + 1 para o terminador nulo)
    char str2[101]; // Vetor para armazenar a segunda string (máximo de 100 caracteres + 1 para o terminador nulo)

    // Leitura das duas strings
    cout << "Digite a primeira string: ";
    cin.getline(str1, 101);

    cout << "Digite a segunda string: ";
    cin.getline(str2, 101);

    // Imprimir as duas strings
    cout << "Primeira string: " << str1 << endl;
    cout << "Segunda string: " << str2 << endl;

    // Verificar e imprimir a segunda letra da primeira string
    if (strlen(str1) >= 2) {
        cout << "Segunda letra da primeira string: " << str1[1] << endl;
    } else {
        cout << "A primeira string tem menos de 2 letras." << endl;
    }

    // Verificar e imprimir a penúltima letra da segunda string
    if (strlen(str2) >= 2) {
        cout << "Penúltima letra da segunda string: " << str2[strlen(str2) - 2] << endl;
    } else {
        cout << "A segunda string tem menos de 2 letras." << endl;
    }

    return 0;
}
