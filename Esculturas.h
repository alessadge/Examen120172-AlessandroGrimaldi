#ifndef ESCULTURAS_H
#define ESCULTURAS_H
#include <Obras.h>

class Esculturas:public Obras{

 protected:
   double peso();
   string material();
 public:
   Esculturas();
   Esculturas(double, string);

   double getPeso();
   void setPeso(double);

   string getMaterial();
   void setMaterial(string);


};

#endif

