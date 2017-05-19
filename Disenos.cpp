#include "Disenos.h"
#include "Obras.h"

Disenos::Disenos (string terreno){

  this-> terreno=terreno;
 
}

Disenos::Disenos(){

}

string Disenos :: getTerreno(){
  return terreno;
}

void Disenos:: setTerreno(string terreno){
  this->terreno=terreno;
}

