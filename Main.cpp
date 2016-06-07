#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
  fstream input;
  input.open("Datos.txt", ios::in);
  string str;
  unsigned char ram[4096];
  int i=0;
  while (getline(input, str)){
    ram[i]=atoi(str.c_str());
    //Imprimir valor ascii de chars
    cout<<int(ram[i])<<endl;
    i++;
  }
  return 0;
}
