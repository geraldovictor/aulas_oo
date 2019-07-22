#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main(){

  vector<int>num(6);
  try{
    num.at(7)=10;
    cout << num[0] << endl;
  }catch(exception& e){
    cout << "ERRO: " << e.what() <<endl;
  }

  return 0;
}
