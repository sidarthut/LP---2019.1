#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){

    char str[20];
    char salva[200];

    ifstream entrada("procuraNoArquivo.txt");
    int cont = 0;

    //Conta a quantidade de palavras.
    while (!entrada.eof()){
        entrada >> str;
        cout << endl << str;
        cont++;
        cout << cont;
    }

    //Volta para o inicio do arquivo.
    entrada.seekg (0, entrada.beg);

    //Dois laços. 
    while (!entrada.eof()){
        strcmp(entrada)
    }

        
        
        
    int qtdLinhas();
    int buscaPalavra();
    //Escreve resposta no arquivo.
    void escreveReposta();
    
    

    return 0;
}
