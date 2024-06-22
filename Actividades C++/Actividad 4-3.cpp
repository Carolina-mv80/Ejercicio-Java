#include <cstdlib>
#include <iostream>
/*
Actividad 3 - Ejercicio 1
El maestro de Matem�ticas necesita desarrollar un programa en C++ que
le permita obtener los resultados correspondientes al c�lculo del m�nimo com�n
m�ltiplo para poder avanzar m�s r�pido al revisar y comprobar los resultados
que los alumnos le dan como respuesta en su examen, el maestro ingresar� los
dos n�meros enteros positivos que les pide a sus alumnos para dicho c�lculo.
El programa  mostrar� en pantalla el m�nimo com�n m�ltiplo.

Actividad 3 - Ejercicio 2
Cada equipo de f�tbol de la liga Independiente del pac�fico tiene
registrados ante la federaci�n a 30 jugadores, la federaci�n necesita un
reporte de cada equipo sobre el peso promedio y la edad promedio, para esto,
la federaci�n desarrolla un programa en C++ donde captura la informaci�n que
le manda cada equipo, correspondiente  a los datos de cada jugador: el nombre
del jugador, el peso y la edad y genera el reporte de los n equipos de la liga
independiente que mostrar� en pantalla, numero de equipo, peso promedio y edad
promedio; adem�s mostrar� el promedio general del peso y el promedio general
de la edad.
*/

using namespace std;

int main()
{
    char continua='s';
    int num1,num2,min,mcm,mcd;
    do{
        system ("cls");
	    cout<<"ACTIVIDAD 3 - EJERCICIO 1\n\n";
		cout<<"Minimo Comun Multiplo\n\n";
		cout<<"Ingrese primer numero: ";
		cin>>num1;
	    cout<<"Ingrese segundo numero: ";
		cin>>num2;
		min=std::min(num1,num2);

		for(int i=1;i<=min;i++){
			if(num1%i==0&&num2%i==0){
				mcd=i;
				mcm=(num1*num2)/mcd;
			}
		}
		cout<<"El MCM entre "<<num1<<" y "<<num2<<" es: "<<mcm<<"\n\n";
	    cout<<"Desea continuar S/N? ";
		cin>>continua;
	}
	while(continua=='s'||continua=='S');
	
	continua='s';
	string jugador,equipo;
	int a,edad, peso;
	float edad_prom,peso_prom;
	do{
        system ("cls");
        
 		cout<<"ACTIVIDAD 3 - EJERCICIO 2\n\n";
		cout<<"Liga Independiente del Pacifico\n\n";
        edad_prom=0;
        peso_prom=0;
        cout<<"Nombre equipo: ";
		cin>>equipo;
		for(int i=1;i<=5;i++){
            cout<<"Nombre jugador "<<i<<": ";
            cin>>jugador;
			cout<<"Edad jugador   "<<i<<": ";
			cin>>edad;
			edad_prom=edad_prom+edad;
			cout<<"Peso jugador   "<<i<<": ";
			cin>>peso;
			peso_prom=peso_prom+peso;
			cout<<endl;
		}
		edad_prom=edad_prom/5;
		peso_prom=peso_prom/5;
		cout<<"\nRESUMEN""\n";
        cout<<"Equipo: "<<equipo<<"\n";
		cout<<"Edad promedio equipo: "<<edad_prom<<"\n";
		cout<<"Peso promedio equipo: "<<peso_prom<<"\n\n";
		cout<<"Desea continuar S/N? ";
		cin>>continua;
    }
	while(continua=='s'||continua=='S');

	system("pause");
	return 0;
}
