#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Quantos números você deseja inserir? ";
    cin >> n;

    vector<int> numeros(n);
    int soma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Insira o número " << i + 1 << ": ";
        cin >> numeros[i];
        soma += numeros[i];
    }

    float media = static_cast<float>(soma) / n;
    cout << "Média: " << media << endl;
    cout << "Números acima da média:\n";

    for (int i = 0; i < n; i++) {
        if (numeros[i] > media) {
            cout << numeros[i] << " ";
        }
    }

    return 0;
}
