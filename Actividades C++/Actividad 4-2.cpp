#include <cstdlib>
#include <iostream>

using namespace std;
/*
ACTIVIDAD 4 - EJERCICIO 1
Un alumno de la clase de lógica matemática desea desarrollar un programa en el
cual introduzca un número entero positivo e invierta los dígitos del número.
Mostrar en pantalla el número invertido.

ACTIVIDAD 4 - EJERCICIO 2
El maestro del grupo 01 del primer semestre de la preparatoria Bosco desea
obtener un reporte final de los alumnos de su grupo, que obtuvieron un promedio
por encima del promedio general del grupo con el fin de tomar en cuenta el
número de alumnos que estuvieron por encima del promedio general del grupo para
formar los grupos para el siguiente semestre. Desarrollar un programa en C++
que pida al usuario los n promedios de los alumnos y calcule el número de
alumnos que estuvieron por encima del promedio general y el total de reprobados.
 Mostrar en pantalla el promedio general del grupo, el total de alumnos que
 estuvieron por encima del promedio general y el total de alumnos reprobados.
*/

int main()
{
    char continua='s';
	int num_est,cont,cuenta_prom,rep;
	float prom;
    do{
        system ("cls");
		cout<<"ACTIVIDAD 4 - EJERCICIO 2\n\n";
		cout<<"Preparatoria Bosco\n\n";
		prom=0;
        cont=0;
        cuenta_prom=0;
        rep=0;
		cout<<"Cuantos estudiantes ingresara? ";
		cin>>num_est;
		cout<<"Ingresar notas entre 0 - 5 \n\n";
		float prom_est[num_est];
		if(num_est>0){
			do{
				cout<<"Promedio estudiante "<<cont+1<<": ";
				cin>>prom_est[cont];
				prom=prom+prom_est[cont];
    			cont++;
			}
			while(cont<num_est);
			cout<<"\nRESUMEN DEL CURSO\n\n";
			prom=prom/num_est;
            cout<<"Estudiantes registrados: "<<num_est<<"\n";
			cout<<"Promedio del curso: "<<prom<<"\n";
			cont=0;
			do{
                if(prom_est[cont]>=prom){
					cuenta_prom++;
				}
				if(prom_est[cont]<3){
					rep++;
				}
    			cont++;
			}
			while(cont<num_est);
            cout<<"Estudiantes por encima del promedio general: "<<cuenta_prom<<"\n";
			cout<<"Estudiantes reprobados con promedio < 3.0  : "<<rep<<"\n";
			
		}
        cout<<"\nDesea continuar S/N? ";
		cin>>continua;
	}
	while(continua=='s'||continua=='S');

	char continuar='s';
	int num,resto,num_inv,num_aux;
	do{
        system ("cls");
    	cout<<"ACTIVIDAD 4 - EJERCICIO 1\n\n";
		cout<<"Alumno Clase de Logica\n\n";
		cout<<"Digite numero: ";
		cin>>num;
		num_aux=num;
		resto=0;
		num_inv=0;
  		do{
			resto=num_aux%10;
			num_aux=num_aux/10;
			num_inv=num_inv*10+resto;
		}
		while(num_aux>0);
			
			cout<<endl<<"El valor: "<<num<<" invertido es: "<<num_inv<< endl;

		cout<<"\nDesea continuar S/N? ";
		cin>>continuar;
	}
	while(continuar=='s'||continuar=='S');

	cout<<endl;

	system("pause");
	return 0;
}
