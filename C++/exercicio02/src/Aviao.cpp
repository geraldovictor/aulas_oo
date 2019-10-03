#include "Aviao.hpp"

Aviao::Aviao(int tp=1){
  if(tp==1){
    this->tipo="Tipo A";
    this->velMax=140;
  }else if(tp==2){
    this->tipo="Tipo B";
    this->velMax=200;
  }else if(tp==3){
    this->tipo="Tipo C";
    this->velMax=300;
  }
}
void Aviao::imprime(){
  cout << "velocidade atual: "<< vel << "\n";
  cout << "velocidade maxima: "<< velMax << "\n";
  cout << "modelo: "<< tipo << "\n";
}


