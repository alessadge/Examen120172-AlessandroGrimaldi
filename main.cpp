#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <Obras.h>

using namespace std;

int main(){
   char opcion;
   char opcion2;
   vector<Obras> Museo;
   string nombre, ID, autor, artista;
   int fechaIngresada;
   
   while(opcion!='f'){
      cout<<endl<<"MENU:"<<endl
         <<"a. Agregar"<<endl
         <<"b. Eliminar"<<endl
         <<"c. Crear matriz"<<endl
         <<"d. Ingresar valor en matriz"<<endl
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
	 if(opcion2=='a'||opcion2=='A){
	    string genero, epoca;
	    cout<<"Ingrese un nombre: "<<endl;
	    cin>>nombre;
	    cout<<"Ingrese un autor: "<<endl;
	    cin>>autor;
	    cout<<"Ingrese un artista: "<<endl;
	    cin>>artista;
	    
	    

	 }
      }
   }
return 0;
}

