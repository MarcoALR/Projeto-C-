#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int num_produtos = 5;
    int quantidades[num_produtos];
    double valores_unitarios[num_produtos];
    double valores_totais[num_produtos];
    double valor_total_compra = 0.0;


    for (int i = 0; i < num_produtos; i++) {
        cout << "Digite a quantidade comprada do produto " << i + 1 << ": ";
        cin >> quantidades[i];
        cout << "Digite o valor unitário do produto " << i + 1 << ": ";
        cin >> valores_unitarios[i];
    }


    for (int i = 0; i < num_produtos; i++) {
        valores_totais[i] = quantidades[i] * valores_unitarios[i];
        valor_total_compra += valores_totais[i];
    }


    cout << fixed << setprecision(2);
    for (int i = 0; i < num_produtos; i++) {
        cout << "O valor total a ser pago pelo produto " << i + 1 << " é: R$ " << valores_totais[i] << endl;
    }


    cout << "O valor total da compra é: R$ " << valor_total_compra << endl;

    return 0;
}
