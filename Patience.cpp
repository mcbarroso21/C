#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Avion{
	private:
		string id;
		float combust;
		string pilotname;
		
	public:
		Avion(string,int,string);
		void setid(string);
		string getid();
		void setcombust(int);
		int getcombust();
		void setpilotname(string);
		string getpilotname();
		
	};
Avion::Avion(string i,int c, string n){
	id= i;
	combust= c;
	pilotname= n;
}

class Fecha{
        int day, month, year;
        public: Fecha();
                ~Fecha();
                void setFecha (string);
                string getFecha();
           };
Fecha::Fecha(){
        day = month = year = 0;
        }
Fecha::~Fecha(){
        }
    void Fecha::setFecha(string mensaje){
        cout<<mensaje<<endl;
        cout<<"Digite el dia: "<<endl;
        cin>>day;
        cout<<"Digite el mes: "<<endl;
        cin>>month;
        cout<<"Digite el annio: "<<endl;
        cin>>year;
        }
        string Fecha::getFecha(){
        return to_string (day) + "/" + to_string (month) + "/" + to_string (year);
        }

class Reservas{
    private: string name;
             string last_name;
             string idclient;
             string idpassport;
             string destino;
             Fecha fecha_1; 
    public:  Reservas(string,string,string,Fecha);
             Reservas();
            void setname();
            string getname();
            void setlast_name();
            string getlast_name();
            void setidclient();
            string getidclient();
            void setidpassport();
            string getidpassport();
            void setdestino();
            string getdestino();
            void setfecha_1();
            string getfecha_1();
            void agregar_reserva();   
};
Reservas::Reservas(){
    name = last_name = idclient = idpassport = destino = " ";
}

//Implementación
void Reservas::setname(){
        fflush(stdin);
		cout<<"Intoduce el nombre: "<<endl; //Pidiendo el nombre del pasajero que desea reservar
        getline (cin, name);
        }
void Reservas::setlast_name(){
        fflush(stdin);
        cout<<"Introduce el apellido: "<<endl; //Pidiendo el apellido del pasajero que desea reservar
        getline (cin, last_name);
        }
void Reservas::setidclient(){
        fflush(stdin);
		cout<<"Introduce el numero de id: "<<endl; //Pidiendo el # de carnet del pasajero que desea reservar
        getline (cin, idclient);
        }
void Reservas::setidpassport(){
        fflush(stdin);
        cout<<"Intorduce el numero de id del pasaporte: "<<endl; //Pidiendo el # de pasaporte del pasajero que desea reservar
        getline (cin, idpassport);
        }
void Reservas::setdestino(){
        fflush(stdin);
        cout<<"Intorduce el destino de su vuelo: "<<endl; //Pidiendo el destino del pasajero que desea reservar
        getline (cin, destino);
        }
void Reservas::setfecha_1(){
        fecha_1.setFecha("Digite la fecha que desea realizar su vuelo: "); //Pidiendo la fecha que desea reservar
        }

//Retorno
string Reservas::getname(){
return name;
}
string Reservas::getlast_name(){
return last_name;
}
string Reservas::getidclient(){
return idclient;
}
string Reservas::getidpassport(){
return idpassport;
}
string Reservas::getdestino(){
return destino;
}
string Reservas::getfecha_1(){
return fecha_1.getFecha();
}

//Bla, bla
void agregar_reserva(string n,string idclient, string idpassport){
    int cantmax;
    string *reservar;
    cout<<"Introdduzca la cantidad máxima de reservas por día: "<<endl;
    cin>>cantmax;
        reservar = new string[cantmax];
        for(int i=0;i<=cantmax;i++){
             cout<<"Reservación"<<i+1<<": "<<endl;
             cin>>reservar[i];
        }
    }

class Vuelos_P : public Avion{
    private: string destino;
    public: 
        Vuelos_P(string,int,string,string);
        void setdestino(string);
        string getdestino();            
};
Vuelos_P::Vuelos_P(string i,int c, string n, string dest):Avion(i,c,n){
    destino=dest;
}

class Vuelos_C : public Avion{  
    private: 
        string list[];
        int cant;
        double peso;
    public: 
        Vuelos_C(string,int,string,string,string,int,double);
        void setpeso(double);
        double getpeso();
};


int main(){
    int op;

    do{
        cout<<"WELCOME TO THE AIRPORT"<<endl;
        cout<<"1- Insertar Avion"<<endl;
        cout<<"2- Buscar Avion"<<endl;
        cout<<"3- Agrerar Vuelo"<<endl;
        cout<<"4- Reservar"<<endl;
        cout<<"5- Salir"<<endl;
        cout<<"Digite la opcion deseada: "<<endl;
        cin>>op;
    }while(op!=5);
      
    getch();
    return 0;
}