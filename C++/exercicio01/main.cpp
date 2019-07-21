#include "Veiculo.hpp"

int main(){

  Veiculo *veiculo1 = new Veiculo(1);
  veiculo1->setPlaca(20323);
  veiculo1->cor="Blue";
  veiculo1->imprime();
  Veiculo *veiculo2 = new Veiculo(2);
  veiculo2->imprime();
  Veiculo *veiculo3 = new Veiculo(3);
  veiculo3->imprime();
  return 0;
}
