#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, t, opc;
	int d=1;
	do{
		cout<<"Ingrese primer numero"<<endl;
		cin>>a;
		cout<<"Ingrese segundo numero"<<endl;
		cin>>b;
		cout<<"Elija una opcion"<<endl;
		cout<<"1. Suma\n";
		cout<<"2. Resta\n";
		cout<<"3. Multiplicacion\n";
		cout<<"4. Division\n";
		cin>>opc;
		if(opc==1){
			t=a+b;
			cout<<"Su total es de "<<t<<endl;
		}else if(opc==2){
			t=a-b;
			cout<<"Su total es de "<<t<<endl;
		}else if(opc==3){
			t=a*b;
			cout<<"Su total es de "<<t<<endl;
		}else if(opc==4){
			t=a/b;
			cout<<"Su total es de "<<t<<endl;
		}else{
			cout<<"Ingrese opcion valida"<<endl;
		}
		cout<<"Desea salir del menu? 1. No, 2. Si";
		cin>>d;
	} while(d==1);
	cout<<"Salio del menu";
	return 0;
}

