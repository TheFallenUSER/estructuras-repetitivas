#include <iostream>
using namespace std;

int main() {
    int n,i,nota;
    int aprob=0,desaprob=0;
    double prom=0;
    char continuar;
	cout<<"Ingrese la cantidad de estudiantes:"<<endl;
    cin>>n;
    for (i=1;i<n;i++) {
        cout<<"Ingrese la nota del estudiante #"<<i<<": ";
        cin>>nota;
		prom=prom+nota;
        if(nota>=11){
            aprob++;
        }else{
            desaprob++;
        }
		cout<<"Va a continuar ingresando notas? (S/N): ";
        cin>>continuar;
		if (continuar!='S'&&continuar!='s') {
            break;
        }
    }
	prom=prom/i;
	cout<<"Cantidad de aprobados: "<<aprob<<endl;
	cout<<"Cantidad de desaprobados: "<< desaprob<<endl;
	cout<<"Promedio del grupo: "<<prom<<endl;
	return 0;
}
