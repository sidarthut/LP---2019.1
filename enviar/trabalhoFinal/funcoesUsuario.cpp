#include <iostream>
#include <fstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool estaLogado(){

    string nome, senha, nomecmp, senhacmp;

    cout << "Nome do usuário: ";
    cin >> nome;

    cout << "Senha: ";
    cin >> senha;

    ifstream usuarios;
    getline(read, nomecmp);
    getline(read, senhacmp);

    if (nomecmp == nome && senhacmp == senha){
        return true;
    }
    else {
        return false;
    }

}

usuario *carregaArquivo(string arquivo);
