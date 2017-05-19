#ifndef OBRAS_H
#define OBRAS_H
#include <string>

using std::string;

class Obras{

 protected:
	string ID;
   string nombre;
   string autor;
   string artista;
   int fechaIngreso;
 public:
   Obras();
   Obras(string,string,string,string,int);

   string getID();
   void setID(string);

   string getNombre();
   void setNombre(string);

   string getAutor();
   void setAutor(string);

   string getArtista();
   void setArtista(string);

   int getFecha();
   void setFecha(int);

};

#endif
