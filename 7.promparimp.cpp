#include <iostream>
using namespace std;

int main(){
	int num,n;
	int cnp=0,cni=0;
	int i=1;
	double promp=0,promi=0;
	cout<<"Introduzca la cantidad de numeros a verificar:"<<endl;
	cin>>n;
	while(i<=n){
		cout<<"Ingresa un numero:"<<endl;
		cin>>num;
		if(num%2!=0){
			promi=promi+num;
			cni++;
		}else{
			promp=promp+num;
			cnp++;
		}
		i++;
	}
	promp=promp/cnp;
	promi=promi/cni;
	cout<<"El promedio de los valores pares es de: "<<promp<<endl;
	cout<<"El promedio de los valores impares es de: "<<promi<<endl;
	return 0;
}
