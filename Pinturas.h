#ifndef PINTURAS_H
#define PINTURAS_H
#include <Obras.h>

class Pinturas:public Obras{

 protected:
   string tecnica();
   string material();
 public:
   Esculturas();
   Esculturas(string, string);

   string getTecnica();
   void setPeso(double);

   string getMaterial();
   void setMaterial(string);


};

#endif


