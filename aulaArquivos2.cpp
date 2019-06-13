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



aluno *carregaArquivo(char *arquivo, int n) {

    aluno *vet = new aluno[n];

    ifstream entrada(arquivo);



    if (vet != NULL) {

        if (entrada.good()) {

            entrada.read((char *)vet,

                            n* sizeof(aluno));

            entrada.close();

        }

    }

    return vet;

}



void gravaRegistro(char *arquivo, aluno dado) {

    ofstream saida;

    saida.open(arquivo, fstream::out |

                        fstream::app);

             // char *

    saida.write((char *)&dado, 1*sizeof(aluno));



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
