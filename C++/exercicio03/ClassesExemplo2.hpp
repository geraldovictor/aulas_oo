#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <string>

using namespace std;

class Materias{
  public:
    int horas;
    int numProvas;
    int numSala;
    string nome;
    int getNumPresenca();
    int getCodMateria();
    string getSenha();
    void setNumPresenca(int pre);
    void setSenha(string senha);
    void setCodMateria(int cod);
    void imprime();
  private:
    int numPresenca;
    string senhaMoodle;
    int codMateria;
};
class Imprime{
  public:
    void imp();
};
class Matematica:public Materias, public Imprime{
  public:
    Matematica();
};

#endif
