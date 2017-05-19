#include "Literatura.h"
#include "Obras.h"

Literatura::Literatura (string genero, string epoca){

  this-> epoca = epoca;
  this-> genero = genero;
}

Literatura::Literatura (string genero, string epoca, string nombre, string ID, string autor, string artista, int fechaIngresada) :
Obras(ID,nombre, autor, artista, fechaIngresada){

  this-> epoca = epoca;
  this-> genero = genero;
 /* this-> ID= ID;
  this-> autor= autor;
  this-> artista = artista;
  this-> fechaIngresada= fechaIngresada;
*/
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


