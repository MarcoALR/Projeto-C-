#include <iostream>
#include <cstring> // Para usar strlen

using namespace std;

int main()
{
    char str[101]; // Vetor para armazenar a string (m�ximo de 100 caracteres + 1 para o terminador nulo)
    int count = 0; // Contador para caracteres 'a' modificados

    // Leitura da string
    cout << "Digite uma string: ";
    cin.getline(str, 101);

    // Processar a string para substituir 'a' por 'b' e contar as modifica��es
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == 'a')
        {
            str[i] = 'b'; // Substitui 'a' por 'b'
            ++count; // Incrementa o contador de modifica��es
        }
    }

    // Imprimir o n�mero de caracteres modificados e a string modificada
    cout << "N�mero de caracteres modificados: " << count << endl;
    cout << "String modificada: " << str << endl;

    return 0;
}
