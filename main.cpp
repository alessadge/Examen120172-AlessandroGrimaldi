#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Disenos.h"
#include "Pinturas.h"

using namespace std;

int main(){
   char opcion;
   char opcion2;
   vector<Obras*> Museo;
   string nombre, ID="", autor, artista;
   int fechaIngresada;
   
   while(opcion!='f'){
      cout<<endl<<"MENU:"<<endl
         <<"a. Agregar"<<endl
         <<"b. Eliminar"<<endl
         <<"c. Transferir Museo"<<endl
         <<"d. Reportes"<<endl
         <<"e. Mostrar matriz"<<endl
         <<"f. Salir"<<endl;
         cin>>opcion;
      if(opcion=='a'||opcion=='A'){
	 cout<<endl<<"Agregar: "<<endl
             <<"a. Literatura"<<endl
             <<"b. Esculturas"<<endl
             <<"c. Pintura"<<endl
             <<"d. Diseno"<<endl;
	     cin>>opcion2;
	 if(opcion2=='a'||opcion2=='A'){
	    string genero, epoca;
	    cout<<"Ingrese un nombre: "<<endl;
	    cin>>nombre;
	    cout<<"Ingrese un autor: "<<endl;
	    cin>>autor;
	    cout<<"Ingrese un artista: "<<endl;
	    cin>>artista;
	    cout<<"Ingrese fecha: "<<endl;
	    cin>>fechaIngresada;
	    cout<<"Ingrese el genero: "<<endl;
	    cin>>genero;
	    cout<<"Ingrese la epoca: "<<endl;
	    cin>>epoca;
	    Museo.push_back(new Literatura(genero, epoca,nombre, ID, autor, artista,fechaIngresada));
	    cout<<"Se agrego exitosamente! "<<endl;

	 }

	 if(opcion2=='b'||opcion2=='B'){
	    string material;
	    double peso;
	    cout<<"Ingrese un nombre: "<<endl;
                cin>>nombre;
                cout<<"Ingrese un autor: "<<endl;
                cin>>autor;
                cout<<"Ingrese un artista: "<<endl;
                cin>>artista;
	        cout<<"Ingrese fecha: "<<endl;
                cin>>fechaIngresada;

	        cout<<"Ingrese el material: "<<endl;
	        cin>>material;
	        cout<<"Ingrese el peso: "<<endl;
	        cin>>peso;
	        Museo.push_back(new Esculturas(peso,material,nombre,ID,autor,artista,fechaIngresada));
	        cout<<"Se agrego exitosamente! "<<endl;

	  }
	 if(opcion2=='c'||opcion2=='C'){
	    string tecnica, material;
	 	    cout<<"Ingrese un nombre: "<<endl;
                    cin>>nombre;
                    cout<<"Ingrese un autor: "<<endl;
                    cin>>autor;
                    cout<<"Ingrese un artista: "<<endl;
                    cin>>artista;
		    cout<<"Ingrese fecha: "<<endl;
                    cin>>fechaIngresada;

		    cout<<"Ingrese el material: "<<endl;
		    cin>>material;
		    cout<<"Ingrese la tecnica: "<<endl;
		    cin>>tecnica;

		    Museo.push_back(new Pinturas(tecnica,material,nombre,ID,autor,artista,fechaIngresada));
		    cout<<"Se agrego exitosamente!"<<endl;
	 }
	 
	 if(opcion2=='d'||opcion2=='D'){
	    string terreno;
	       cout<<"Ingrese un nombre: "<<endl;
                        cin>>nombre;
                        cout<<"Ingrese un autor: "<<endl;
                        cin>>autor;
                        cout<<"Ingrese un artista: "<<endl;
                        cin>>artista;
			cout<<"Ingrese fecha: "<<endl;
                        cin>>fechaIngresada;

                        cout<<"Ingrese el terreno: "<<endl;
                        cin>>terreno;
                        Museo.push_back(new Disenos(terreno,nombre, ID, autor,artista, fechaIngresada));
			cout<<"Se agrego exitosamente!"<<endl;

	 }//fin D
      }
      if(opcion=='b'||opcion=='B'){
	 int pos;
	 cout<<"Cual posicion quiere eliminar? "<<endl;
	 cin>>pos;
	 Museo.erase(Museo.begin()+pos);
	 cout<<"Se elimino exitosamente"<<endl;
      }//fin if b
      if(opcion=='c'||opcion=='C'){
	 int pos;
	 cout<<"Cual posicion quiere transferir? "<<endl;
	 cin>>pos;
	 Museo.push_back(Museo.being()+pos);
	 Museo.erase(Museo.being()+pos);
	 cout<<"Se transfirio exitosamente!"<<endl;
      }
      if(opcion=='c'||opcion=='C'){
      }//fin if c
   }
return 0;
}

