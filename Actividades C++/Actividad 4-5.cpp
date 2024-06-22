#include <cstdlib>
#include <iostream>

using namespace std;
/*
El departamento de  recursos humanos de la fabrica de papel  Combustible desea
obtener la edad de sus empleados de manera automatizada, para ello se va a
tener como entrada dos fechas en el formato día ( 1 a 31), mes (1 a 12) y
año (entero de cuatro dígitos), correspondientes a la fecha de nacimiento la
cual la tomara de las correspondientes actas de nacimiento de cada empleado y
la fecha actual. Desarrolle un programa en C++, que calcule y visualice en
pantalla la edad de cada empleado, la edad se debe mostrar en años.
*/
int main()
{
    char continua='s';
    string otra_fecha;
    int i,dia_act,mes_act,ano_act,dia_nac,mes_nac,ano_nac;
	float actual,dif,nac,edad;
	dia_act=0;
    mes_act=0;
    ano_act=2019;
	dia_nac=0;
    mes_nac=0;
    ano_nac=0;
    otra_fecha="s";
	do{
        system ("cls");

 		cout<<"ACTIVIDAD 5 - EJERCICIO 1\n\n";
		cout<<"Fabrica de papel Combustible\n\n";
		cout<<"Ingresar fecha actual \n";
			
        cout<<"Dia, ingrese valor entre(1 - 31): ";
		cin>>dia_act;
		while((dia_act<1)||(dia_act>31)){
            cout<<"Error en día, vuelva a escribir\n";
			cout<<"Dia: ";
			cin>>dia_act;
		}
        cout<<"Mes, ingrese valor entre(1 - 12): ";
		cin>>mes_act;
		while((mes_act<1)||(mes_act>12)){
			cout<<"Error en mes, vuelva a escribir\n";
			cout<<"Mes: ";
			cin>>mes_act;
		}
		cout<<"Ano, ingrese actual(2019): ";
		cin>>ano_act;
		while(ano_act!=2019){
			cout<<"Error en ano, vuelva a escribir\n";
			cout<<"Ano: ";
			cin>>ano_act;
		}
		actual=ano_act+(mes_act/12)+(dia_act/365);
		cout<<dia_act<<"-"<<mes_act<<"-"<<ano_act<<"\n";
		cout<<endl<<endl;
		cout<<"Ingresar fecha nacimiento \n";
		for(i=1;;i++){
            cout<<"Dia, ingrese valor entre(1 - 31): ";
			cin>>dia_nac;
			while((dia_nac<1)||(dia_nac>31)){
                cout<<"Error en dia, vuelva a escribir\n";
				cout<<"Dia nacimiento: ";
				cin>>dia_nac;
			}
			cout<<"Mes, ingrese valor entre(1 - 12): ";
			cin>>mes_nac;
            while((mes_nac<1)||(mes_nac>12)){
                cout<<"Error en mes, vuelva a escribir\n";
				cout<<"Mes nacimiento: ";
				cin>>mes_nac;
			}
			cout<<"Ano, ingrese valor entre(1900 - 2018): ";
			cin>>ano_nac;
			while((ano_nac<1900)||(ano_nac>2019)){
                cout<<"Error en ano, vuelva a escribir\n";
				cout<<"ano nacimiento: ";
				cin>>ano_nac;
			}
			cout<<dia_nac<<"-"<<mes_nac<<"-"<<ano_nac<<"\n";
			cout<<endl<<endl;
			nac=ano_nac+(mes_nac/12)+(dia_nac/365);
			dif=actual-nac;
			edad=(int)dif;
			cout<<"\nEdad empleado: "<<edad;
			
			cout<<"\nIngresar otra fecha Nacimiento? S/N: ";
			cin>>otra_fecha;
			cout<<endl198;
			dia_nac=0;
    		mes_nac=0;
			if((otra_fecha!="s")&&(otra_fecha!="S"))
			    break;
		}
		
    	cout<<"\n\nDesea continuar con otra fecha actual S/N? ";
		cin>>continua;
    }
	while(continua=='s'||continua=='S');
	
	system("pause");
	return 0;
}
