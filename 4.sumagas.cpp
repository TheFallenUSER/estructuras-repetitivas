#include <iostream>
using namespace std;

int main(){
	int gasto;
	int suma=0,i=0;
	char opcion;
	do{
		i++;
		cout<<"Ingrese el gasto #"<<i<<":"<<endl;
		cin>>gasto;
		suma=suma+gasto;
		cout<<"Deseas continuar ingresando gastos? (S/N) ";
		cin>>opcion;
	}while(opcion=='s'||opcion=='S');
	cout<<"La suma de los "<<i<<" gastos es de: S/. "<<suma<<endl;
	return 0;
}
	
