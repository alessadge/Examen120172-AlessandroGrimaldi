#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Obras.h"
#include "Literatura.h"
#include "Esculturas.h"
#include "Disenos.h"
#include "Pinturas.h"
#include <stdlib.h>
using namespace std;
string hexadecimal(vector<Obras>);

int main(){
   
   char opcion;
   char opcion2;
   vector<string> arreglo;
   vector<Obras> Museo;
   vector<Obras> Transferir;
   string nombre, ID="", autor, artista;
   int fechaIngresada;
   
   while(opcion!='f'){
      cout<<endl<<"MENU:"<<endl
         <<"a. Agregar"<<endl
         <<"b. Eliminar"<<endl
         <<"c. Transferir Museo"<<endl
         <<"d. Reportes"<<endl
         <<"e. Buscar autor"<<endl
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
	    ID=hexadecimal(Museo);
	    Museo.push_back(Literatura(genero, epoca,nombre, ID, autor, artista,fechaIngresada));
	    //Museo[0].setID(ID);
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
		ID=hexadecimal(Museo);
	        Museo.push_back( Esculturas(peso,material,nombre,ID,autor,artista,fechaIngresada));
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
		    ID=hexadecimal(Museo);
		    Museo.push_back(Pinturas(tecnica,material,nombre,ID,autor,artista,fechaIngresada));
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
			ID=hexadecimal(Museo);
                        Museo.push_back(Disenos(terreno,nombre, ID, autor,artista, fechaIngresada));
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
	 Transferir.push_back(Museo[pos]);
	 Museo.erase(Museo.begin()+pos);
      }//fin if c
      if(opcion=='d'||opcion=='D'){
	cout<<"Museos: "<<endl;
	for(int i=0; i<Museo.size();i++){
		cout<<i<<".) "<<Museo[i].getNombre()<<" "<<Museo[i].getID()<<" "<<Museo[i].getAutor()<<" "<<Museo[i].getArtista()<<endl;

	}
	cout<<"Transferidos: "<<endl;
	for(int i=0; i<Transferir.size();i++){
                cout<<i<<".) "<<Transferir[i].getNombre()<<" "<<Transferir[i].getID()<<" "<<Transferir[i].getAutor()<<" "<<Transferir[i].getArtista()<<endl;

        }
 
	
      }//fin if d
      if(opcion=='e'||opcion=='E'){
	string autor;
	cout<<"Ingrese el nombre del autor"<<endl;
	cin>>autor;
	for(int i = 0; i<Museo.size();i++){
		if(autor==Museo[i].getAutor()){
			cout<<Museo[i].getNombre()<<endl;
		}
	}

      }//fin if e
   }

return 0;
}

string hexadecimal(vector<Obras> arreglo){
  vector<string> pauta;
  string acum;
  int random;
  int contador=0;
  pauta.push_back("1");
  pauta.push_back("2");
  pauta.push_back("3");
  pauta.push_back("4");
  pauta.push_back("5");
  pauta.push_back("6");
  pauta.push_back("7");
  pauta.push_back("8");
  pauta.push_back("9");
  pauta.push_back("A");
  pauta.push_back("B");
  pauta.push_back("C");
  pauta.push_back("D");
  pauta.push_back("E");
  pauta.push_back("F");


   while(contador==0){ 
    for(int f = 0; f < 6; f++){
	random = rand()%15;
	acum=acum+ pauta[random];
		
    }
    contador=1;
    for(int i = 0; i < arreglo.size();i++){
	if(acum==arreglo[i].getID()){
		contador=1;
	}
    cout<<acum<<endl;
}
}
return acum;
}
