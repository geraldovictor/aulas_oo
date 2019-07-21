#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
  fstream arquivo;
  char opc = 's';
  string nome;;
  string linha;
  arquivo.open("Teste2.txt", ios::out);

  while(opc=='s'){
    cout << "Digite o nome :";
    getline (cin,nome);
    arquivo << nome << endl;
    cout << "Deseja adicionar mais nomes?\n";
    cin >> opc;
    cin.ignore();
  }
  arquivo.close();
  arquivo.open("Teste2.txt", ios::in);
  cout << "Nomes digitados: \n";
  if(arquivo.is_open()){
    while(getline(arquivo,linha)){
      cout << linha << endl;
    }
    arquivo.close();
  }else
  cout << "Não foi possível abrir o arquivo\n";
  return 0;
}
