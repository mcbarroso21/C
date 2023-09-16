#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ char name[20];
  char name1[20];
  int op;

	cout<<"Digite su nombre: ";
	cin.getline(name1,20);
    cout<<"Digite el nombre de su enamordo: ";
    cin.getline(name,20);
	cout<<"Hola Sr: "<<name<<" usted acepta como legitima esposa a la Sra: "<<name1<<endl;
	cout<<"1_si"<<endl;
	cout<<"2_no"<<endl;
	cout<<"Elija su respuesta: ";
	cin>>op;
  		if(op==1)
  		{
  			cout<<"Sra: "<<name1<<endl;
  			cout<<"Sr: "<<name<<endl;
  			cout<<"=> Los declaro marido y mujer"<<endl;
  			cout<<"=> Pueden besarce y que sean felices por siempre "<<endl;
  			cout<<"(｡♡‿♡｡)";
  		}
  	
  	else
  		if(op==2)
  		{
  			cout<<"=> Sorry Sra: "<<name1<<endl;
  			cout<<"=> EL Sr: "<<name<<" no la quiere, alega que solo la quiere pa' secuestro"<<endl;
  			cout<<"=> En otra palabras esta pa' darle duro como termoeletrica a la poblacion"<<endl;
  			cout<<"=> BABY ESTOY PA' METELTE HUEVOO";
  		}
  	
		
	getch();
	return 0;
}