/**************************************

Percorre o vetor e imprime a soma de
todos os números maiores que "base".

**************************************/
#include <iostream>
//algorithm é usado para a função sort
#include <algorithm>
//Para utilizar a função clock
#include <ctime>

using namespace std;

int main(){
    // Gera a informação
    int base;
    const unsigned tamvet = 32768;
    int data[tamvet];

    cout << "Insira o valor base: ";
    cin >> base;

    //Preenche o vetor com valores aleatórios
    for (unsigned c = 0; c < tamvet; ++c)
        data[c] = rand() % 256;

    // !!!Com isso o proximo laço fica mais rápido!!!
    sort(data, data + tamvet);

    //Essa função retorna a quantidade de "clicks" em certo periodo
    clock_t inicio = clock();
    long long soma = 0;

    for (unsigned i = 0; i < 100000; ++i){
        for (unsigned c = 0; c < tamvet; ++c){
            if (data[c] >= base)
                soma += data[c];
        }
    }

    // static_cast reverte a conversão implicita
    double tempo = static_cast<double>(clock() - inicio) / CLOCKS_PER_SEC;

    cout << tempo << endl;
    cout << "SOMA = " << soma << endl;

    return 0;
}
