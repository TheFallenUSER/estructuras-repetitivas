#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros a sumar:"<<endl;
	cin>>n;
	int suma=0;
	for(int i=1;i<=n;i++){
		suma=suma+i;
	}
	cout<<"La suma de los "<<n<<" numeros es de: "<<suma<<endl;
	return 0;
}
	
