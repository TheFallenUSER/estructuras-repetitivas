#include <iostream>
using namespace std;

int main(){
	int n,mul;
	cout<<"Bienvenido al programa"<<endl;
	do{
		cout<<"Ingresa la cantidad de multiplos de 7:"<<endl;
		cin>>n;
		if(n<=0){
			cout<<"ERROR: La cantidad de multiplos no puede ser menor a 1. \n"<<endl; //El car�cter "\n" indica salto de l�nea
		}
	}while(n<=0);
	int i=1;
	while(i<=n){
		mul=i*7;
		cout<<"7 x "<<i<<" = "<<mul<<endl;
		i++;
	}
	return 0;
}
