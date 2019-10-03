#include "Aviao.hpp"

int main(int argc, char *argv[]){

  Aviao *av1= new Aviao(1);
  Aviao *av2= new Aviao(2);
  Aviao *av3= new Aviao(3);

  av1->imprime();
  av2->imprime();
  av3->imprime();

  return 0;
}
