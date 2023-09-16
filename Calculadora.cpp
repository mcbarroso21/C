#include <iostream>
#include <math.h>

using namespace std;

int main()
{	int op;
	float a,b,R;
	
	
	cout<<"Bienvenido a su calculadora personalizada"<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"1_ suma"<<endl;
	cout<<"2_ resta"<<endl;
	cout<<"3_ multiplicacion"<<endl;
	cout<<"4_ division"<<endl;
	cout<<"5_ potencia"<<endl;
	cout<<"6_ raiz"<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"Su operacion a realizar es: "<<endl;
	cin>>op;
	cout<<"Digite el primer valor: "<<endl;
	cin>>a;
	cout<<"Digite el segundo valor: "<<endl;
	cin>>b;
	

		if(op==1)
			{
				R=a+b;
				cout<<"El resultado de la suma es: "<<R<<endl;
			}
	else
		if(op==2)
			{
				R=a-b;
				cout<<"El resultado de la resta es: "<<R<<endl;
			}
	else
		if(op==3)
			{
				R=a*b;
				cout<<"El resultado de la multiplicacion es: "<<R<<endl;
			}
	else
		if(op==4)
			{
				R=a/b;
				cout<<"El resultado de la division es: "<<R<<endl;
			}
	else
		if(op==5)
			{
				R=pow(a,b);
				cout<<"El resultado de la potencia es: "<<R<<endl;
			}	
	else
		if(op==6)
			{
				R=sqrt(a);
				cout<<"El resultado de la raiz es: "<<R<<endl;
			}
		
	
	
	return 0;
}