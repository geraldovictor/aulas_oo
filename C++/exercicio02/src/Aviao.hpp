#ifndef AVIAO_HPP
#define AVIAO_HPP

#include <iostream>
#include <string>

using namespace std;

class Aviao{
  public:
    int vel=0;
    int velMax;
    string tipo;
    Aviao(int tp);
    void imprime();
  private:
};


#endif
