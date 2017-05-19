#include "Esculturas.h"
#include "Obras.h"

Esculturas::Esculturas (double peso, string material, string nombre, string ID, string autor, string artista, int fechaIngresada){

  this-> peso = peso;
  this-> material = material;
  this-> nombre = nombre;
  this-> ID= ID;
  this-> autor= autor;
  this-> artista = artista;
  this-> fechaIngreso= fechaIngresada;

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



