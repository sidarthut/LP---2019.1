#ifndef  _USUARIO_

#define _USUARIO_
typedef struct _usuario_ {
    vector<string> nome;
    vector<string> nome;
}usuario;

#endif

usuario *carregaArquivo(string arquivo);
//carreArquivo
//@param string arquivo ==> arquivo a ser carregado.
void gravaRegistro(string arquivo, usuario dado);
//carreArquivo
//@param string arquivo ==> arquivo onde usuario dado ser� gravado
bool estaLogado();
//estaLogado
//Retorna true ou false caso o usuario foram previamente salvos.
