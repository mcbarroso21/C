#include<iostream>
using namespace std;

void Eliminar(int *&Arreglo, int &tam, int pos){
	int *Temp = new int[tam-1];
	for(int i = 0; i < pos; i++) Temp[i] = Arreglo[i];
	for(int i = pos; i < tam-1; i++) Temp[i] = Arreglo[i+1];
	Arreglo = Temp;
	tam--;
}

void Agregar(int *&Arreglo, int &tam, int valor){
	int *Temp = new int[tam+1];
	for(int i = 0; i < tam; i++) Temp[i] = Arreglo[i];
	Temp[tam] = valor;
	Arreglo = Temp;
	tam++;
}

void Buscar(int *Arreglo, int tam, int valor, int *&Temp, int &cant){
	for(int i = 0; i < tam; i++){
		if(Arreglo[i] == valor){
			Agregar(Temp, cant, i);
		}
	}
}

void Insertar(int *&Arreglo, int &tam, int pos, int valor){
	int *Temp = new int[tam+1];
	for(int i = 0; i < pos; i++) Temp[i] = Arreglo[i];
	for(int i = pos+1; i <= tam; i++) Temp[i] = Arreglo[i-1];
	Temp[pos] = valor;
	Arreglo = Temp;
	tam++;
}

int main(){
	int *A, n, pos, tam = 0;
	
	//Agregar
	cout << "Digite el valor a agregar: ";
	cin >> n;
	Agregar(A, tam, n);
	cout << "Valor agregado.\n";
	
	//Insertar
	cout << "Digite el valor a insertar: ";
	cin >> n;
	cout << "Digite su posicion: ";
	cin >> pos; //Debes hacerle un prueba de errores
	Insertar(A, tam, pos, n);
	cout << "Valor insertado.\n";
	
	//Eliminar
	cout << "Digite la posicion a eliminar: ";
	cin >> pos; //Debes hacerle un prueba de errores
	Eliminar(A, tam, pos);
	cout << "Posicion eliminada.\n";
	
	//Buscar
	cout << "Digite el numero a buscar: ";
	cin >> n;
	int *T, cant = 0;
	Buscar(A, tam, n, T, cant);
	if(cant == 0) cout << "NO existe el valor en el arreglo.\n";
	else{
		cout << "El numero " << n << " aparece en las posiciones ";
		for(int i = 0; i < cant; i++) cout << T[i] << " ";
		cout << "\n";
	}
	
	return 0;
}
