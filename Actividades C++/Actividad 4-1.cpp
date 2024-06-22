#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout<<"ACTIVIDAD 4 - EJERCICIO 1\n\n";
	cout<<"Compania Aseguradora del Pacifico\n";
	int comision, vventas,vpagar,cventas,tvendedores;
	string ingreso="s";
	cventas=0;
	tvendedores=0;

	while(ingreso=="s"||ingreso=="S"){
		cout<<"\nIngrese monto de ventas: $ ";
		cin>>vventas;
		comision=vventas*0.09;
		vpagar=5000+comision;
		cout<<"Valor a pagar: $ "<<vpagar<<"\n\n";

		if(vpagar>8000){
			cventas++;
			}
		tvendedores++;
		cout<<"Desea continuar S/N: ";
		cin>>ingreso;
		}
	cout<<"\nTotal vendedores: "<<tvendedores<<"\n";
	cout<<"Total comisiones >8000: "<<cventas<<"\n\n";
    system("pause");
	system ("cls");

	char nombre[50], seguir;
	int num_cliente, cant, prec_unit, cant_prod;
	long total, tventas;
	num_cliente=1;
	tventas = 0;
	cant_prod=0;
    seguir='s';
	while ((seguir == 's') || (seguir == 'S')){
        system ("cls");
		cout<<"ACTIVIDAD 4 - EJERCICIO 2\n\n";
		cout<<"Empresa Comercializadora\n\n";
		cout << "Nombre del Cliente: " << num_cliente << ": ";
		cin >> nombre;
		cout << "Cantidad de articulos comprados: ";
		cin >> cant;
		cant_prod=cant_prod+cant;
		cout << "Precio Unitario: $";
		cin >> prec_unit;
		total = cant * prec_unit;
		cout << "El valor total a pagar por su compra es   $: " << total << endl;
		tventas = tventas + total;
		num_cliente++;
		cout << "Siguiente Cliente (S / N) : ";
		cin >> seguir;
		}
	 system ("cls");
     cout<<"Empresa Comercializadora\n";
     cout<<"Resumen Diario\n\n";
	 cout << "Las Ventas Totales del Dia fueron de $" << tventas << endl;
	 cout << "Total Clientes registrados del Dia : " << num_cliente-1 << endl;
	 cout << "Total Productos comprados en el Dia: " << cant_prod << endl;

	system("pause");
	return 0;
}
