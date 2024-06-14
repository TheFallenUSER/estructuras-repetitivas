#include <iostream>
using namespace std;

int main(){
	int n,mul;
	cout<<"Ingresa la cantidad de multiplos de 7:"<<endl;
	cin>>n;
	int i=1;
	while(i<=n){
		mul=i*7;
		cout<<"7 x "<<i<<" = "<<mul<<endl;
		i++;
	}
	return 0;
}
