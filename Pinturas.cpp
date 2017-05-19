#include "Pinturas.h"
#include "Obras.h"

Pinturas::Pinturas (string tecnica, string material){

  this-> tecnica = tecnica;
  this-> material = material;
}

Pinturas::Pinturas(){

}

string Pinturas :: getTecnica(){
  return tecnica;
}

void Pinturas :: setTecnica(string tecnica){
  this->tecnica=tecnica;
}

string Pinturas :: getMaterial(){
  return material;
}

void Esculturas :: setMaterial(string material){
  this->material=material;
}

