#ifndef PINTURAS_H
#define PINTURAS_H
#include "Obras.h"
#include <string>

class Pinturas:public Obras{

 protected:
   string tecnica();
   string material();
 public:
   Pinturas();
   Pinturas(string, string,string,string,string,string,int);

   string getTecnica();
   void setPeso(double);

   string getMaterial();
   void setMaterial(string);


};

#endif


