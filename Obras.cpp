#include "Obras.h"

Obras::Obras(string ID, string nombre, string autor, string artista, int fechaIngreso){

  this-> ID = ID;
  this-> nombre = nombre;
  this-> autor = autor;
  this-> artista = artista;
  this-> fechaIngreso = fechaIngreso;

}

Obras::Obras(){

}

string Obras :: getID(){
  return ID;
}

void Obras :: setID(string ID){
  this->ID=ID;
}

string Obras :: getNombre(){
  return autor;
}

void Obras :: setNombre(string nombre){
  this->nombre=nombre;
}

string Obras :: getAutor(){
  return autor;
}

void Obras :: setAutor(string autor){
  this->autor=autor;
}

string Obras :: getArtista(){
  return artista;
}

void Obras :: setArtista(string artista){
  this->artista=artista;
}

int Obras :: getFecha(){
  return fechaIngreso;
}

void Obras :: setFecha(int fechaIngreso){
  this->fechaIngreso=fechaIngreso;
}

               
