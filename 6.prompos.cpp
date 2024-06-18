#include <iostream>
using namespace std;

int main(){
	int num,n,cnn;
	double prom=0;
	cout<<"Introduzca la cantidad de numeros a verificar:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Ingresa un numero:"<<endl;
		cin>>num;
		if(num>0){
			prom=prom+num;
			cnn++;
		}
	}
	prom=prom/cnn;
	cout<<"El promedio de los valores no negativos es de: "<<prom<<endl;
	return 0;
}
