#include <cstdlib>
#include <iostream>

using namespace std;
/*
Actividad 4 - Ejercicio 1
Desarrollar un programa que use un ciclo for infinito y un estatuto break,
para el cual se desea calcular los gastos diarios de la caja chica de un
bufete de consultoría en sistemas. Mostrar en pantalla el gasto total.
Los gastos pueden ser diversos como papelería, lápices, copias, etc. Recuerde
que el ciclo infinito no termina, por lo tanto el uso del estatuto break es
para romper el ciclo infinito, por lo tanto tendrá que validar para romper el
ciclo infinito y salir.
*/

int main()
{
    char continuar='s';
	string tipo,fecha,otro_gasto;
	int i,valor,total;
    do{
        system ("cls");
    	cout<<"ACTIVIDAD 4 - EJERCICIO 1\n\n";
		cout<<"Bufete de Consultoria en Sistemas\n\n";
		valor=0;
		total=0;
		otro_gasto="s";
		cout<<"Digite Fecha de los gastos -sin espacios-: ";
		cin>>fecha;
		for(i=0;;i++){
            cout<<"\n";
            cout<<"Tipo de gasto  : ";
			cin>>tipo;
			cout<<"Valor del gasto: $ ";
			cin>>valor;
			total=total+valor;
			cout<<"\nIngresar otro gasto? S/N: ";
			cin>>otro_gasto;
			if((otro_gasto!="s")&&(otro_gasto!="S"))
			    break;
		}
        cout<<"\nCONSOLIDADO DE GASTOS\n ";
		cout<<"Los gastos de "<<fecha<<" fueron: "<<total<<endl;
		cout<<"Total gastos registrados: "<<i+1<<endl;
		cout<<"\nDesea continuar S/N? ";
		cin>>continuar;
	}
	while(continuar=='s'||continuar=='S');
	cout<<endl;
	system("pause");
	return 0;
}
