#ifndef DISENOS_H
#define DISENOS_H
#include <Obras.h>

class Disenos:public Obras{

 protected:
   string terreno();
   
 public:
   Esculturas();
   Esculturas(string);

   string getTerreno();
   void setTerreno(string);


};

#endif


