#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>
#include <string>

using namespace std;


class Veiculo{
  public:
    string marca;
    string cor;
    string tipo;
    Veiculo(int tp);
    void imprime();
    int getPlaca();
    void setPlaca(int pl);
  private:
    int placa;
};

#endif
