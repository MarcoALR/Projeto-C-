#include <iostream>
using namespace std;

int main()
{
    int vetor[5];
    int somaImpares = 0;

    cout << "Digite 5 numeros inteiros:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> vetor[i];

        if(vetor[i] % 2 != 0)
        {
            somaImpares += vetor[i];
        }
    }

    cout << "A soma dos elementos impares é: " << somaImpares << endl;

    return 0;

}
