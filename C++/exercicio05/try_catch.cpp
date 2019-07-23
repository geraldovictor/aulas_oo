#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n1, double n2);

int main(){
  double n1,n2;
  //cin >> n1 >> n2;
  vector<int>num(5);
  try{
    num.at(4)=10;
    cout << num[4] << endl;
  }catch(exception& e){
    cout << "ERRO: " << e.what() <<endl;
  }
  /*try{
    cout << divide(n1,n2) << endl;
  }catch(const char* msg){
    cout << "ERRO: " << msg <<endl;
  }*/
  return 0;
}

double divide(double n1, double n2){
  if (n2==0){
    throw "Erro de divisão por 0";
  }
  return n1/n2;
}
