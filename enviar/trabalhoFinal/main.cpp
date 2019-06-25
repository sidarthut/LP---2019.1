#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

    int escolha;
    string nome, senha;
    //3: Colocar doação ; 4: mostrar catalogo; 5: solicitar doação; 6: Histórico
    cout << "1: Registro\n2: Login\n3: Sair\nSua escolha: ";
    cin >> escolha;

    switch(escolha){

        case 1:

            cout << "Selecione o nome do usuario: "; cin >> nome;
            cout << "Selecione a nova senha: "; cin >> senha;

            ofstream file;
            file.open("data\\" + nome + ".txt");
            file << nome << endl << senha;
            file.close();

            main();
            break;

        case 2:

            cout << "Login: \nSenha: ";

            bool status = estaLogado();

            if (!status){
                cout << "Login incorreto!";
                system("PAUSE");
                return 0;
            }
            else {
                cout << "Login realizado!" << endl;
                system("PAUSE");
                return 1;
            }
            break;

        case 3:

            break;
    }

    return 0;
}



