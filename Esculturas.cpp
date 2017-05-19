#include "Esculturas.h"
#include "Obras.h"

Esculturas::Esculturas (double peso, string material){

  this-> material = material;
  this-> peso = peso;
}

Esculturas::Esculturas(){

}

double Esculturas :: getPeso(){
  return peso;
}

void Esculturas :: setPeso(double epoca){
  this->peso=peso;
}

string Esculturas :: getMaterial(){
  return material;
}

void Esculturas :: setMaterial(string material){
  this->material=material;
}



