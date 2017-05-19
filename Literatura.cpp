#include "Literatura.h"
#include "Obras.h"

Literatura::Literatura (string genero, string epoca){

  this-> epoca = epoca;
  this-> genero = genero;
}

Literatura::Literatura(){

}

string Literatura :: getEpoca(){
  return epoca;
}

void Literatura :: setEpoca(string epoca){
  this->epoca=epoca;
}

string Literatura :: getGenero(){
  return genero;
}

void Literatura :: setGenero(string genero){
  this->genero=genero;
}


