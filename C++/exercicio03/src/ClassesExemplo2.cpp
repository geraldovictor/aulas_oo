#include "ClassesExemplo2.hpp"

Matematica::Matematica(){
  nome="Matematica";
  horas=0;
  numProvas=3;
  numSala=1;
  setSenha("matematica");
  setCodMateria(4321);
  setNumPresenca(0);
}
int Materias::getNumPresenca(){
  return numPresenca;
}
int Materias::getCodMateria(){
  return codMateria;
}
string Materias::getSenha(){
  return senhaMoodle;
}
void Materias::setNumPresenca(int pre){
  this->numPresenca= pre;
}
void Materias::setSenha(string senha){
  this->senhaMoodle= senha;
}
void Materias::setCodMateria(int cod){
  this->codMateria= cod;
}
void Materias::imprime(){
  cout << "Nome :" << nome << "\n";
  cout << "Numero da sala :" << numSala << "\n";
  cout << "Código da materia :" << getCodMateria() << "\n";
  cout << "Horas/aula :" << horas << "\n";
  cout << "Numero de provas :" << numProvas << "\n";
  cout << "Senha Moodle :" << getSenha() << "\n";
  cout << "Presença do aluno :" << getNumPresenca() << "\n";

}
void Imprime::imp(){
  cout << "ok" << "\n";
}
