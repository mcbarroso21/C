/*1.	En un aeropuerto se conoce los diferentes vuelos de pasajeros que se realizan en una semana.
 Para un tipo de vuelo cualquiera se controla el identificador del avión, el consumo de combustible y
  el nombre del piloto. De los vuelos de pasajeros se conoce además el destino y la cantidad de reservaciones realizadas.
  
      El programa debe permitir:
a.	Nombre del piloto del vuelo de pasajeros CU657.
b.	Hallar el promedio de reservaciones realizadas en los vuelos de pasajeros.*/

#include <iostream>
#include <string>
using namespace std;

class vuelo{
	private:
		string identif;
		int combustible;
		string nombre;
	public:
		vuelo(string,int,string);
		void setidentif(string);
		string getidentif();
		void setcombustible(int);
		int getcombustible();
		void setnombre(string);
		string getnombre();
		
		void Mostrar_Vuelo();
};
vuelo::vuelo(string i,int c, string n){
	identif= i;
	combustible= c;
	nombre= n;
}
void vuelo::Mostrar_Vuelo(){
	 cout<<"identificacion: "<<identif<<endl;
	  cout<<"combustible: "<<combustible<<endl;
	   cout<<"nombre: "<<nombre<<endl;
}
class vuelo_pasajeros: public vuelo{
	private:
		string destino;
		int *cantReserv;
	public:
		vuelo_pasajeros(string,int,string,string,int);
		void setdestino(string);
		string getdestino();
		void setcantReserv(int);
		int getcantReserv();
		
		float Prom_de_reserv();
		void Mostrar_VP();
};
vuelo_pasajeros::vuelo_pasajeros(string i,int c, string n,string d,int *cantRes):vuelo(i,c,n){
	destino= d;
	cantReserv= new int[cantRes];
	cantReserv=cantRes;
}
float vuelo_pasajeros::Prom_de_reserv(){
	float suma=0;
	for(int i=0;i<cantRes;i++){
	suma+=cantReserv[i];
	}
	return suma/cantRes;
}