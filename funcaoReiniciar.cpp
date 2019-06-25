#include <iostream>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int reiniciar (void); 

int main (void){
    reiniciar ();
}

int reiniciar (void){
    char opcao;
    cout <<"Deseja reiniciar o programa? [S/N]\n";
    cin >> opcao;
    opcao=toupper(opcao); // deixa a letra maiúscula
    switch (opcao){
        case 'S': //Entre aspas simples porque é um caracter
             system ("cls");
             main ();
        case 'N': //Entre aspas simples porque é um caracter
             return EXIT_SUCCESS;
        default:
            cout <<"\aOpcao invalida!\n\n";
            reiniciar ();
    }
