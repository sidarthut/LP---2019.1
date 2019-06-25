#include <iostream>

#include <fstream>



using namespace std;



typedef struct _aluno_ {

    char nome[100];

    char matricula[50];

}aluno;



int qtdRegistros(char *arquivo) {

    //abri o aqruivo e descobrir quantos

    //registros existem

    ifstream temp(arquivo);

    int n =0;

    if (temp.good()) {

        temp.seekg(0, temp.end);  //movimenta ponteiro

        //temp.beg, temp.cur

        n = temp.tellg(); //para dizer pos atual

        temp.close();

    }

    return n / sizeof(aluno);

}



aluno *carregaArquivo(string arquivo) {

    ifstream entrada(arquivo);


    if (vet != NULL) {

        if (entrada.good()) {

            entrada.read(string arquivo, vector<string> senha );

            entrada.close();

        }

    }

    return vet;

}



void gravaRegistro(string arquivo, aluno dado) {

    ofstream saida;

    saida.open(arquivo, fstream::out |

                        fstream::app);

             // char *

    saida.write(aluno.nome );



    saida.close();

}





int main(){


 
    int n;

    aluno *vet;



    n = qtdRegistros("dados.txt");

    vet = carregaArquivo("dados.txt", n);



    for (int i=0; i<n; i++)

        cout << vet[i].nome << " | "

            << vet[i].matricula << endl;



    delete[]vet;



    aluno a;

    cin.getline(a.nome, 100);

    cin.getline(a.matricula, 50);



    gravaRegistro("dados.txt", a);



    n = qtdRegistros("dados.txt");

    vet = carregaArquivo("dados.txt", n);



    for (int i=0; i<n; i++)

        cout << vet[i].nome << " | "

            << vet[i].matricula << endl;



    delete[]vet;





}

