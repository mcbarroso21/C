#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float t;
	cout<< "Digite su temperatura corporal : ";
	cin>> t;
	if(t>=36 && t<=36.9)
		cout<<"No tiene problema";
	else
		if(t>=37 && t<=37.9)
		cout<<"Tiene Fogaje";
	else
		cout<<"Acuda rapidamente al medico, tiene fiebre de"<<t<<endl;
	
	getch();
	return 0;
	
}
