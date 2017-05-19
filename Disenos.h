#ifndef DISENOS_H
#define DISENOS_H
#include <Obras.h>

class Disenos:public Obras{

 protected:
   string terreno();
   
 public:
   Disenos();
   Disenos(string,string,string,string,string,int);

   string getTerreno();
   void setTerreno(string);


};

#endif


