#include <iostream>
#include<conio.h>

using namespace std;

class Fecha{
    private:
            int dia,mes,annio;
    public:
            Fecha(int,int,int);
            void mostrar();
};
Fecha::Fecha(int d,int m,int a){
        dia = d;
        mes = m;
        annio = a;
        }
    void Fecha::mostrar()
        {
        cout<<"Hoy es "<<dia<<" de "<<mes<<" del "<<annio<<"y cumplo 22 annios ya, ufff como pasa el tiempo"<<endl;
        }

int main()
{
    Fecha hoy = Fecha(5,4,2023);

    hoy.mostrar();

    getch();
    return 0;
}
