#include "Pinturas.h"
#include "Obras.h"

Pinturas::Pinturas (string tecnica, string material, string nombre, string ID, string autor, string artista, int fechaIngresada){

  this-> tecnica = tecnica;
  this-> material = material;
  this-> nombre = nombre;
  this-> ID= ID;
  this-> autor= autor;
  this-> artista = artista;
  this-> fechaIngresada= fechaIngresada;

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

void Pinturas :: setMaterial(string material){
  this->material=material;
}

