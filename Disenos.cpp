#include "Disenos.h"
#include "Obras.h"



Disenos::Disenos(){

}

string Disenos :: getTerreno(){
  return terreno;
}

void Disenos:: setTerreno(string terreno){
  this->terreno=terreno;
}

Disenos::Disenos (string terreno, string nombre, string ID, string autor, string artista, int fechaIngresada){

  this-> terreno=terreno;
  this-> nombre = nombre;
  this-> ID= ID;
  this-> autor= autor;
  this-> artista = artista;
  this-> fechaIngresada= fechaIngresada;

}

