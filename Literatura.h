#ifndef LITERATURA_H
#define LITERATURA_H
#include <Obras.h>

class Literatura:public Obras{

 protected:
   string genero();
   string epoca();
 public:
   Literatura();
   Literatura(string, string);

   string getGenero();
   void setGenero(string);

   string getEpoca();
   void setEpoca(string);

   
};

#endif
~                                                                
~          
