#ifndef LITERATURA_H
#define LITERATURA_H
#include "Obras.h"
#include <string>

class Literatura:public Obras{

 protected:
   string genero;
   string epoca;
 public:
   Literatura();
   Literatura(string, string);
   Literatura(string, string, string, string, string, string, int);
   string getGenero();
   void setGenero(string);

   string getEpoca();
   void setEpoca(string);

   
};

#endif
                                                                
         
