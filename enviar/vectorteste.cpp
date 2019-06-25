#include <iostream>
#include <vector>

using namespace std;

//Functions Declarations

//use const antes de vector se o valor não for modificado//Sempre passe Vector por referencia
void fillVector( vector<int>&);
//fillVector
//@parametros vector<int>& - O vetor a ser preenchido

void printVector(const vector<int>&);
//printVector
//@parametros const vector<int>& - O vetor a ser impresso

void reverso(const vector<int>&);
//reverse
//@param const vector<int>& - O vector é impresso ao contrário

void printEvens(const vector<int>&);
//printEvenns
//@param const vector<int>& - O vector a ser impresso

void substitui(vector<int>&);
//substituii
////@param vector<int>& - vector alvo da substituição


int main() {

    vector<int> myVector;

    fillVector(myVector);
    printVector(myVector);
    reverso(myVector);
    printEvens(myVector);
    substitui(myVector);
    printVector(myVector);

    return 0;
}

//Definições das funções

//Preenche o Vector
void fillVector(vector<int>& newMyVector) {

    cout << "Digite uma lista de numeros: ";
    int input;
    cin >> input;

    while (input != -1){
        newMyVector.push_back(input);
        cin >> input;
    }
    cout << endl;
}

void printVector(const vector<int>& newMyVector) {

    cout << "Vector: ";

    for (unsigned int i=0; i < newMyVector.size(); i++){
        cout << newMyVector.at(i) << " ";
    }

    cout << endl;
}

void reverso(const vector<int>& newMyVector) {

    cout << "Vector reversed: ";

    for (unsigned int i = newMyVector.size(); i > 0; i--) {
        cout << newMyVector.at(i - 1) << " ";
    }
    cout << endl;
}

void printEvens(const vector<int>& newMyVector) {

    cout << "Numeros pares: ";

    for (unsigned int i = 0; i < newMyVector.size(); i++){
        if((newMyVector.at(i) % 2) == 0){
            cout << newMyVector.at(i) << " ";
        }

    }
    cout << endl;
}

void substitui(vector<int>& newMyVector){
    int old, subs;

    cout << "Digite o numero a ser trocado e seu substituto: ";
    cin >> old >> subs;

    for (unsigned int i=0; i < newMyVector.size(); i++){
        if (newMyVector.at(i) == old) {
            newMyVector.at(i) = subs;
        }
    }
}