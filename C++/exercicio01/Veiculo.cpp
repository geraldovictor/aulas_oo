#include "Veiculo.hpp"


Veiculo::Veiculo(int tp){
  if(tp==1){
    this->tipo="Moto";
    this->placa=100;
    this->marca="Honda";
    this->cor="Preta";
  }else if(tp==2){
    this->tipo="Carro";
    this->placa=5000;
    this->marca="Corsa";
    this->cor="Branco";
  }else if(tp==3){
    this->tipo="Triciclo";
    this->placa=6201;
    this->marca="Tricicle";
    this->cor="Verde";
  }
}
void Veiculo::imprime(){
  cout << "Tipo :" << tipo << "\n";
  cout << "Cor :" << cor << "\n";
  cout << "Marca :" << marca << "\n";
  cout << "Placa :" << placa << "\n";

}
int Veiculo::getPlaca(){
  return placa;
}
void Veiculo::setPlaca(int pl){
  this->placa=pl;
}
